#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
/**
 *read_textfile - read and return in out put a text
 *@filename: text
 *@letters: size of text
 *
 *Return:letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op = 0;
	int re = 0;
	char *buf;
	int wr;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);

	re = read(op, buf, letters);
	close(op);
	if (re == -1)
	{
		free(buf);
		return (0);
	}

	wr = write(STDOUT_FILENO, buf, re);
	if (wr == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (wr);
}
