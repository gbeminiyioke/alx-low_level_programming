#include "main.h"

void close_a_file(int f_name);
char *crt_bfr(char *filename);

/**
 * close_a_file - this function closes a file
 * @f_name: the name of file to be closed
 */

void close_a_file(int f_name)
{
	int i;

	i = close(f_name);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_name);
		exit(100);
	}
}

/**
 * crt_bfr - this function allocates 1024 bytes for a buffer
 * @filename: the name of file buffer is being created for
 * Return: a pointer to the allocated buffer
 */

char *crt_bfr(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}

/**
 * main - this function copies the content of a file
 * to another file
 * @argc: the number of arguments
 * @argv: array of pointersto the argument
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	char *buff;
	int f_name, outp, start, end;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = crt_bfr(argv[2]);
	start = open(argv[1], O_RDONLY);
	f_name = read(start, buff, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (start == -1 || f_name == -1)
		{
			dprintf(STDERR_FILENO, "ErrorL Can't read from file %s\n", argv[1]);
			exit(98);
		}
		outp = write(end, buff, f_name);
		if (outp == -1 || end == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
		}
		f_name = read(start, buff, 1024);
		end = open(argv[2], O_WRONLY | O_APPEND);
	} while (f_name > 0);
	free(buff);
	close_a_file(start);
	close_a_file(end);
	return (0);
}
