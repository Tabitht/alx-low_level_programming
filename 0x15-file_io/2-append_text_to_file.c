#include "main.h"
/**
 * append_text_to_file- appends text at the end of a file
 * @filename: name of the file
 * @text_content: null terminated string to be appended
 * Return: 1 on success, -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, i = 0;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);
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
