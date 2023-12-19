#include "main.h"

/**
 * create_file - this function creates a file
 * @filename: the name of the file to create
 * @text_content: NULL terminated string
 * to write to the file
 * Return: 1 on success, -1 on failure or if
 * filename is NULL.
 */

int create_file(const char *filename, char *text_content)
{
	int outp, sz, f_name;

	sz = 0;
	if  (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (sz = 0; text_content[sz];)
			sz++;
	}
	f_name = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	outp = write(f_name, text_content, sz);
	if (outp == -1 || f_name == -1)
		return (-1);
	close(f_name);
	return (1);
}
