#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * copy_textfile- Copies text file into another
 * @file_from: name of the file to be read from
 * @file_to: name of the file to write to
 * Return: Number of letters copied
 */
void copy_textfile(const char *file_from, const char *file_to)
{
	char *buf;
	int n, cs, cs2, wn, fd, fd2;

	buf = malloc(1024 * sizeof(char));
	fd = open(file_from, O_RDONLY);
	if (fd == -1 || !buf)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	n = read(fd, buf, 1024);
	do {
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	wn = write(fd2, buf, n);
	if (wn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	fd2 = open(file_to, O_WRONLY | O_APPEND);
	n = read(fd, buf, 1024);
	} while (n > 0);
	free(buf);
	cs = close(fd);
	if (cs == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	cs2 = close(fd2);
	if (cs2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
/**
 * main- Entry point of program
 * @ac: no of args
 * @av: pointer to args
 * Return: 0 on success or -1 on failliar
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!av[1])
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	copy_textfile(av[1], av[2]);
	return (0);
}

