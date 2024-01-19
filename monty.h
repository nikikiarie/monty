#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - double linked list strruct
 * @n: int
 * @prev: prev pointer
 * @next: next pointer
 * Description: node structure
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s- opcodes
 * @opcode: opcode
 * @f: handler function
 * Description: function and opcode
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct exec_op - stores values
 * @arg: value
 * @file: monty file pointer
 * @line: line
 * @flag: flag
 * Description: stores values
 */
typedef struct exec_info
{
	char *arg;
	FILE *file;
	char *line;
	int flag;
} bus;
extern bus b;
int mty_exe(char *line, stack_t **stack, unsigned int count, FILE *file);
void st_free(stack_t *head);
void nodeplus(stack_t **head, int i);
void queueplus(stack_t **head, int i);

void pall_mty(stack_t **head, unsigned int count);
void push_mty(stack_t **head, unsigned int count);
void pint_mty(stack_t **head, unsigned int count);
void pop_mty(stack_t **head, unsigned int count);
void swap_mty(stack_t **head, unsigned int count);
void add_mty(stack_t **head, unsigned int count);
void nop_mty(stack_t **head, unsigned int count);
#endif
