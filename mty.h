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
 * struct stack_node - double linked list strruct
 * @t: int
 * @prev: prev pointer
 * @next: next pointer
 * Description: node structure
 */
typedef struct stack_node
{
	int t;
	struct stack_node *prev;
	struct stack_node *next;
} stack_n;
/**
 * struct instruction- opcodes
 * @op: opcode
 * @h: handler function
 * Description: function and opcode
 */
typedef struct instruction
{
	char *op;
	void (*h)(stack_n **stack, unsigned int line);
} instruct;
/**
 * struct exec_op - stores values
 * @arg: value
 * @file: monty file pointer
 * @line: line
 * @flag: flag
 * Description: stores values
 */
typedef struct exec_op
{
	char *arg;
	FILE *file;
	char *line;
	int flag;
} bus;
extern bus b;
int mty_exe(char *line, stack_n **stack, unsigned int count, FILE *file);
void st_free(stack_n *head);
void push_mty(stack_n **head, unsigned int count);
#endif
