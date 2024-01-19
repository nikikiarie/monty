#include "monty.h"
#include <stdio.h>
bus b = {NULL, NULL, NULL, 0};
/**
 * main - monty interpreter
 * @argc: no of args
 * @argv: monty file location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *line;
	FILE *file;
	ssize_t r_line = 1;
	unsigned int count = 0;
	size_t s = 0;
	stack_n *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	b.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (r_line > 0)
	{
		line = NULL;
		r_line = getline(&line, &s, file);
		b.line = line;
		count++;
		if (r_line > 0)
		{
			mty_exe(line, &stack, count, file);
		}
		free(line);
	}
	st_free(stack);
	fclose(file);
	return (0);
}
