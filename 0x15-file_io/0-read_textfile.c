#include "main.h"

/**
 * read_textfile - this function reads a text file and
 * prints it to the POSIX standard output.
 * @filename: this is the name of the file that is
 * being read
 * @letters: this is the number of letters it should
 * read and print
 * Return: the actual number of letters it could
 * read and print, 0 if filename is NULL or write fails
 * or does not write the expected amount of bytes or
 * if the file cannot be opened or read
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
