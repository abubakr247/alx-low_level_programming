#include "main.h"

/**
 * append_text_to_file - append text_content to file filename
 * @filename: the path of the file
 * @text_content: content to wrote at file filename
 * Return: 1 success, -1 fialed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		if (write(fd, "", 0) < 0)
		{
			close(fd);
			return (-1);
		}
		return (1);
	}
	len = strlen(text_content);
	if (write(fd, text_content, len) < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);

}
