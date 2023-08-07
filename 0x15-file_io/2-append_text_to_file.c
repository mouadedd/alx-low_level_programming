#include "main.h"

/**
 * append_text_to_file - Appends text in file
 * @filename: pointer to name
 * @text_content: string to append with
 * Return: -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int l = 0;
	int s;
	int o;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	s = write(o, text_content, l);

	if (o == -1 || s == -1)
		return (-1);
	close(o);
	return (1);
}
