#include "main.h"
/**
* free_stack - frees a doubly list.
* @head: head of the stack.
*/
void free_stack(stack_t *head)
{
	stack_t *sus;

	sus = head;
	while (head)
	{
		sus = head->next;
		free(head);
		head = sus;
	}
}

