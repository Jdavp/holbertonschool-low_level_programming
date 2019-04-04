#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *create_file - create a file with a specific content
 *@filename: text
 *@text_content: size of text
 *
 *Return:letters read and printed
 */

int create_file(const char *filename, char *text_content)
{
	int op = 0;
	int ite = 0;
	int wr;

	if (!filename)
		return (-1);

	op = open(filename, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	if (op == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(op);
		return (-1);
	}

	while (text_content[ite] != '\0')
		ite++;

	wr = write(op, text_content, ite);
	if (wr == -1)
	{
		close(op);
		return (-1);
	}
	close(op);
	return (1);
}
