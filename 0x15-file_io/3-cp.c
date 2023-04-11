#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>

int copy_file(const char *from_path, const char *to_path);

/**
 * main - Entry point
 * DESCRIPTION: a program that copies the content of a file
 * to another file
 * @argc: number of command line arguments passed to the program
 * @argv: arguments passed through command line
 * Return: 1 on success, -1 on failure
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	result = copy_file(argv[1], argv[2]);

	return (result);
}

/**
 * copy_file - copy file to file
 * DESCRIPTION: a function that copies the content of a file
 * to another file
 * @from_path: the first file to copy from
 * @to_path: the second file to copy into
 * Return: 0 on success, -1 on failure
 */
int copy_file(const char *from_path, const char *to_path)
{
	FILE *from = fopen(from_path, "r");
	FILE *to = fopen(to_path, "w");
	char buffer[1024];
	size_t count;
	int write, close, stat_file;
	struct stat st;

	if (from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_path);
		exit(98);
	}

	if (to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_path);
		fclose(from);
		exit(99);
	}

	if (access(to_path, F_OK) != -1)
	{
		if (truncate(to_path, 0) != 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't truncate %s\n", to_path);
			fclose(from);
			fclose(to);
			exit(99);
		}
	}

	while ((count = fread(buffer, 1, sizeof(buffer), from)))
	{
		write = fwrite(buffer, 1, count, to);
		if (write < 0 || (size_t)write < count)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_path);
			fclose(from);
			fclose(to);
			exit(99);
		}
	}

	close = fclose(from);
	if (close != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(from));
		fclose(to);
		exit(100);
	}

	close = fclose(to);
	if (close != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(to));
		exit(100);
	}

	stat_file = stat(to_path, &st);
	if (stat_file == 0)
	{
		mode_t mode = st.st_mode & 0777;

		mode |= S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
		if (chmod(to_path, mode) != 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't set permissions for %s\n", to_path);
			return (-1);
		}
	}

	return (0);
}

