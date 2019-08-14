#include "holberton.h"

/**
* read_elf_header - reads the header of an elf
* @fd: file descriptor
* @elf_header: pointer to hold Elf32_Ehdr elements
* Return: nothing
**/
void read_elf_header(int32_t fd, Elf32_Ehdr *elf_header)
{
	if (elf_header == NULL)
	{
		dprintf(STDERR_FILENO, "header null Unable to read elf\n");
		exit(98);
	}
	/*SEEK_SET: The file offset is set to offset bytes. */
	if (lseek(fd, (off_t)0, SEEK_SET) != (off_t)0)
	{
		/* if could not reposition the file offset. */
		dprintf(STDERR_FILENO, "offset Unable to read elf\n");
		exit(98);
	}
	/* if read is not what is needed */
	if (read(fd, (void *)elf_header,
		 sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
	{
		dprintf(STDERR_FILENO, "size of Unable to read elf\n");
		exit(98);
	}
}

/**
* is_ELF - checks if its an elf or not
* @eh: pointer to hold Elf32_Ehdr elements
* Return: 1 if an elf, else 0
**/
bool is_ELF(Elf32_Ehdr eh)
{
	/* ELF magic bytes are 0x7f,'E','L','F'
	 * Using  octal escape sequence to represent 0x7f
	 */
	if (eh.e_ident[0] == 0x7f && eh.e_ident[1] == 'E' &&
	    eh.e_ident[2] == 'L' && eh.e_ident[3] == 'F')
		return (1);
	return (0);
}

/**
* print_typ - prints elf header type information
* @eh: pointer to hold Elf32_Ehdr elements
* Return: nothing
**/
void print_typ(Elf32_Ehdr eh)
{
	printf("Type:                                           ");
	switch (eh.e_type)
	{
	case ET_NONE:
		printf("N/A (0x0)\n");
		break;

	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;

	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;

	case ET_DYN:
		printf("DYN (Shared Object file)\n");
		break;

	case ET_CORE:
		printf("CORE (Core file)");
		break;

	default:
		printf("<unknown: %d>\n", eh.e_type);
	}
}
/**
 * print_os - prints elf header OS/ABI information
 * @eh: pointer to Elf32_Ehdr elements
 * Return: nothing
 **/
void print_os(Elf32_Ehdr eh)
{
	printf("OS/ABI:                                         ");
	switch (eh.e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - GNU");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_AIX:
		printf("UNIX - AIX\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - Irix\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_MODESTO:
		printf("Novell Modesto\n");
		break;
	case ELFOSABI_OPENBSD:
		printf("UNIX - OpenBSD\n");
		break;
	case 13:
		printf("VMS - OpenVMS\n");
		break;
	case 14:
		printf("HP - Non-Stop Kernel\n");
		break;
	case 15:
		printf("AROS\n");
		break;
	case 16:
		printf("FenixOS");
		break;
	default:
		printf("<unknown: %d>\n", eh.e_ident[EI_OSABI]);
	}
}
/**
* print_clas - prints elf header class information
* @eh: pointer to elf_header elements
* Return: nothing
**/
void print_clas(Elf32_Ehdr eh)
{
	printf("Class:                                          ");
	switch (eh.e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;

	case ELFCLASS64:
		printf("ELF64\n");
		break;

	default:
		printf("Invalid class\n");
	}

}
/**
* print_dta - prints elf header data information
* @eh: pointer to elf_header elements
* Return: nothing
**/
void print_dta(Elf32_Ehdr eh)
{
	printf("Data:                                           ");
	switch (eh.e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;

	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;

	default:
		printf("Invalid ELF data\n");
	}
}
/**
* print_vrsn - prints elf header version information
* @eh: pointer to elf_header elements
* Return: nothing
**/
void print_vrsn(Elf32_Ehdr eh)
{
	printf("Version:                                        ");
	switch (eh.e_version)
	{
	case EV_NONE:
		printf("Invalid version\n");
		break;

	default:
		printf("%d (Current)\n", 1);
	}
}

/**
* print_elf_header - helper function to print the elf head
* @elf_header: pointer to elf_header elements
* Return: nothing
**/
void print_elf_header(Elf32_Ehdr elf_header)
{
	int i;

	/* write contents to output file */
	printf("ELF Header:\n");
	printf("Magic:     %x %x %x %x", elf_header.e_ident[0],
	       elf_header.e_ident[1], elf_header.e_ident[2],
	       elf_header.e_ident[3]);

	for (i = 4; i < 16; i++)
		printf("0%x ", elf_header.e_ident[i]);
	printf("\n");
	print_clas(elf_header);
	print_dta(elf_header);
	print_vrsn(elf_header);
	print_os(elf_header);
	printf("ABI Version:                                    %u\n",
	       elf_header.e_ident[EI_ABIVERSION]);
	print_typ(elf_header);
	printf("Entry point address:                            0x%x\n",
	       elf_header.e_entry);
}
/**
* main - displays the information contained in the ELF header
* refer http://www.skyfree.org/linux/references/ELF_Format.pdf
* @argc: number of args
* @argv: pointer to arg
* Return: 0 on success or exit with 98 on failure
**/
int32_t main(int32_t argc, char *argv[])
{
	int32_t fd;
	Elf32_Ehdr eh;/* elf-header is fixed size */

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <ELF_FILE>\n", argv[0]);
		exit(98);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Filename is empty\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to open %s\n", argv[1]);
		exit(98);
	}

	/* ELF header : at start of file */
	read_elf_header(fd, &eh);
	if (!is_ELF(eh))
	{
		dprintf(STDERR_FILENO, "Unable to read elf\n");
		exit(98);
	}
	print_elf_header(eh);
	return (0);
}
