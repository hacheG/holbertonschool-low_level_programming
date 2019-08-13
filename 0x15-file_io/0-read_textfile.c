#include "holberton.h"
/**
 * read_textfile - Reads a file and prints it to the POSIX stdout.
 * @filename: The name of the file that needs to be read.
 * @letters: Is the number of letters the function should print.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rd;
	int i;
	int reading;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	rd = open(filename, O_RDONLY);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}

	reading = read(rd, buf, letters);
	if (reading == -1)
	{
		close(rd);
		free(buf);
		return (0);
	}

	for (i = 0; i < reading; i++)
	{
		if (write(STDOUT_FILENO, &buf[i], 1) == -1)
		{
			close(rd);
			free(buf);
			return (0);
		}

	}
	close(rd);
	free(buf);
	return (reading);
}
