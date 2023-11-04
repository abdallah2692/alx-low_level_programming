#include "main.h"

/**
 * create_file - creae filename
 * @filename: filename
 * @text_content: the content
 * Return: 1
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t add = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		add = write(fd, text_content, len);
	close(fd);
	return (add == len ? 1 : -1);
}



int _strlen(char *c)
{
	int a = 0;
	if (!c)
		return (0);
	while (*c++)
		a++;
	return (a);
}
