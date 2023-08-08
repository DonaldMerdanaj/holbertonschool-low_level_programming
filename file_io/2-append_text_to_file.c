#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - function that appends text to a file
 * @filename: name of the file
 * @text_content: text content
 * Return: 1 on succes, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length;
	int n = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);
		n = write(fd, text_content, length);
	}

	if (n == -1)
		return (-1);

	return (1);
}
