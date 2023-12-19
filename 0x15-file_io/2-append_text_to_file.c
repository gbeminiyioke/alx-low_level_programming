#include "main.h"

/**
 * append_text_to_file - this function append text at
 * the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the
 * end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_name, outp, sz;

	sz = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (sz = 0; text_content[sz];)
			sz++;
	}
	f_name = open(filename, O_WRONLY | O_APPEND);
	outp = write(f_name, text_content, sz);
	if (f_name == -1 || outp == -1)
		return (-1);
	close(f_name);
	return (1);
}
