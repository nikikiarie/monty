#include "monty.h"
/**
 * mty_exe - executes opcode
 * @stack: head linked list
 * @count: line count
 * @file: monty file pointer
 * @line: line
 * Return: 1
 */
int mty_exe(char *line, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t inst_o[] = {
		{"push", push_mty}};
       /**	{"pall", pall_mty}, {"pint", pint_mty}
	*	, {"pop", pop_mty}, {"swap", swap_mty}, {"add", add_mty},
	*	{"nop", nop_mty}, {"sub", sub_mty}, {"div", div_mty},
	*	{"mul", mul_mty}, {"mod", mod_mty}, {"pchar", pchar_mty},
	*	{"pstr", pstr_mty}, {"rotl", rotl_mty}, {"queue", queue_mty},
	*	{"stack", stack_mty}, {NULL, NULL}};
	*/
	unsigned int i = 0;
	char *tkn;

	tkn = strtok(line, " \n\t");
	if (tkn && tkn[0] == '#')
	return (0);
	b.arg = strtok(NULL, " \n\t");
	while (inst_o[i].opcode && tkn)
	{
		if (strcmp(tkn, inst_o[i].opcode) == 0)
		{
			inst_o[i].f(stack, count);
			return (0);
		}
		i++;
	}
	if (tkn && inst_o[i].opcode== NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", count, tkn);
		fclose(file);
		st_free(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
