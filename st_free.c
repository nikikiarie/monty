#include "monty.h"
/**
 * st_free - frees linked list
 * @head: head
 */
void st_free(stack_n *head)
{
	stack_n *z;

	z = head;
	while (head)
	{
		z = head->next;
		free(head);
		head = z;
	}
}
