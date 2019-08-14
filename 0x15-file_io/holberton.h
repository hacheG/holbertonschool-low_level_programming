#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>
#include <elf.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void read_elf_header(int32_t fd, Elf32_Ehdr *elf_header);
bool is_ELF(Elf32_Ehdr eh);
void print_os(Elf32_Ehdr eh);
void print_typ(Elf32_Ehdr eh);
void print_clas(Elf32_Ehdr eh);
void print_dta(Elf32_Ehdr eh);
void print_vrsn(Elf32_Ehdr eh);
void print_elf_header(Elf32_Ehdr elf_header);
#endif
