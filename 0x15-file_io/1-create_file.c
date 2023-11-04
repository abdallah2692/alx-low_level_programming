#include "main.h"

/**
 * create_file - creae filename
 * @filename: filename
 * @text_content: the content
 * Return: 1
*/

int create_file(const char *filename, char *text_content)
{
	if (!filename)
		return (-1);

	FILE *fp = fopen(filename, 600);
	if (!fp)
		return (-1);
	if (text_content != NULL)
		fwrite(text_content, sizeof(text_content[0]), strlen(text_content), fp);

	if (fclose(fp) == EOF)
		return (-1);
	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	return (-1);

	return (1);
}
