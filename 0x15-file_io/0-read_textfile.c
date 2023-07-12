#include "main.h"

/**
 * read_textfile - this function reads a textfile and prints
 * it to the POSIX standard output
 * @filename: the name of the file being read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and
 * print, 0 if filename is NULL or write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f_name, outp, rd;
	char *bfr;

	f_name = open(filename, O_RDONLY);
	if (f_name == -1)
		return (0);
	bfr = malloc(sizeof(char) * letters);
	rd = read(f_name, bfr, letters);
	outp = write(STDOUT_FILENO, bfr, rd);
	free(bfr);
	close(f_name);
	return (outp);
}
