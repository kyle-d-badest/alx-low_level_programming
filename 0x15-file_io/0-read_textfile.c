#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: writ- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffe;
	ssize_t fd;
	ssize_t writ;
	ssize_t k;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffe = malloc(sizeof(char) * letters);
	k = read(fd, buffe, letters);
	writ = write(STDOUT_FILENO, buffe, k);

	free(buffe);
	close(fd);
	return (writ);
}
