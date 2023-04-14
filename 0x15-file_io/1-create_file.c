#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, writ, tall = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (tall = 0; text_content[tall];)
			tall++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writ = write(file_descriptor, text_content, tall);

	if (file_descriptor == -1 || writ == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
