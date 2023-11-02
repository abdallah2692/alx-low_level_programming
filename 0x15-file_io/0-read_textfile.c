#include "main.h"
/**
 * read_textfile - read the text
 * @filename: file name
 * @letters: num ot letters
 * Return: a
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char fp[BUFSIZ * 8];
	ssize_t a;
	int i;

	if (!filename || !letters)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	a = read(i, &fp[0], letters);
	a = write(STDOUT_FILENO, &fp[0], a);
	close(i);
	return (a);
}

