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
	char line[128];
	FILE *file;
	unsigned int count = 0;
	stack_t *stack = NULL;

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
	while (fgets(line, sizeof(line), file) != NULL)
	{
		b.line = line;
		count++;
		mty_exe(line, &stack, count, file);
	}
	st_free(stack);
	fclose(file);
	return (0);
}
