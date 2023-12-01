#include "main.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int r_file;
	ssize_t n_read, n_write;
	char *fbuf;

	if (filename == NULL)
		return (0);

	r_file = open(filename, O_RDONLY);

	if (r_file == -1)
		return (0);

	fbuf = malloc(sizeof(char) * letters);
	if (fbuf == NULL)
	{
		close(r_file)
		return (0);
	}
	n_read = read(r_file, fbuf, letters);
	close(r_file);

	if (n_read == -1)
	{
		free(fbuf);
		return(0);
	}

	n_write = write(STDOUT_FILENO, fbuf, n_read);
	free(fbuf);
	if (n_read != n_write)
		return (0);
	return (n_write);
}
