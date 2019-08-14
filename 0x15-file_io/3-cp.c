#include "holberton.h"
int open_files(char *f_from, char *f_to);
int read_files(int from_fd, int to_fd, char *f_from, char *f_to);
int write_to_file(char *buff, int to_fd, int read_chars, char *f_to);

/**
 * main - Entry point
 * @argc: Count of the arguments to start the program.
 * @argv: An array of strings containing the arguments passed to the program.
 * Description: The overall goal of this program is to copy the contents of a
 * file FILE_FROM to a file FILE_TO. Usage ./cp FILE_FROM FILE_TO.
 * Return: Always zero, but It will have exit 97 when there it does not have
 * the right number of parameters, 98 when it can not read / open
 * the file FILE_from, 99 when it can not open/write to the file FILE_TO and
 * 100 when it can not close the file descriptors.
 */
int main(int argc, char **argv)
{
	char *f_from;
	char *f_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = argv[1];
	f_to = argv[2];

	open_files(f_from, f_to);
	exit(0);
	return (0);
}

/**
 * open_files - Opens the files necessary for copying contents.
 * @f_from: Name of the file FILE_FROM.
 * @f_to: Name of the file FILE_TO.
 * Return: Always zero. Exit 98, and 99.
 */
int open_files(char *f_from, char *f_to)
{
	int from_fd;
	int to_fd;

	from_fd = open(f_from, O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	to_fd = open(f_to, O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (to_fd == -1)
	{
		/*if (errno == EEXIST) was removed*/
		to_fd = open(f_to, O_WRONLY | O_TRUNC);
		if (to_fd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", f_to);
			exit(99);
		}
	}
	read_files(from_fd, to_fd, f_from, f_to);
	if (close(from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}
	if (close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}
	return (0);
}
/**
 * read_files - Reads the file FROM_FILE.
 * @from_fd: File descriptor for FROM_FILE.
 * @to_fd: File descriptor for TO_FILE.
 * @f_from: Name of the file FILE_FROM.
 * @f_to: Name of the file FILE_TO.
 * Return: Always zero. Exit 98.
 */
int read_files(int from_fd, int to_fd, char *f_from, char *f_to)
{
	int read_chars;
	char buff[1024];

	read_chars = read(from_fd, buff, 1024);
	if (read_chars == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	write_to_file(buff, to_fd, read_chars, f_to);
	while (read_chars != 0)
	{
		read_chars = read(from_fd, buff, 1024);
		if (read_chars == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", f_from);
			exit(98);
		}
		if (read_chars == 0)
			return (0);
		write_to_file(buff, to_fd, read_chars, f_to);
	}
	return (0);
}

/**
 * write_to_file - Writes to a file TO_FILE.
 * @buff: An array of characters containing up to 1024 chars.
 * @to_fd: File descriptor of file TO_FILE.
 * @read_chars: A number representing how many characters were read and need to
 * be written.
 * @f_to: Name of the file FILE_TO.
 * Return: Always Zero. Exit 99.
 */
int write_to_file(char *buff, int to_fd, int read_chars, char *f_to)
{
	int i;

	for (i = 0; i < read_chars; i++)
	{
		if (write(to_fd, &buff[i], 1) == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", f_to);
			exit(99);
		}
	}
	return (0);
}
