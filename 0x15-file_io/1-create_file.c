#include "main.h"
/**
 * create_file- creates file
 * @filename: name of file to create
 * @text_content: null terminated string to write to the file
 * Return: 1 for success, -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, i;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (o < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		w = write(o, text_content, i);
		if (w != i)
			return (-1);
	}
	close(o);
	return (1);
}
