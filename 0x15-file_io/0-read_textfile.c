#include "main.h"
/**
 * read_textfile- reads a text file and prints it to stdout
 * @filename: name of file to read
 * @letters: numbers of letters to read and print
 * Return: for null file returns 0
 * returns 0 if file cannot be opened or read
 * returns 0 if it does not return expected number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	if (o < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	r = read(o, buf, letters);
	if (r < 0)
	{
		free(buf);
		return (0);
	}
	buf[r] = '\0';
	close(o);
	w = write(STDOUT_FILENO, buf, r);
	if (w < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (w);
}
