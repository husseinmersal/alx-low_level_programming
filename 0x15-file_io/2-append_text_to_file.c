
#include "main.h"

/**
 * append_text_to_file - a function that Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int om, writ, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	om = open(filename, O_WRONLY | O_APPEND);
	writ = write(om, text_content, length);

	if (om == -1 || writ == -1)
		return (-1);

	close(om);

	return (1);
}

