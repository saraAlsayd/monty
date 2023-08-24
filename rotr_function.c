
#include "main.h"
/**
  *f_rotr- rotates stack to bottom.
  *@head: stack head
  *@count: line_number
  *Return:void.
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *cop;

	cop = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cop->next)
	{
		cop = cop->next;
	}
	cop->next = *head;
	cop->prev->next = NULL;
	cop->prev = NULL;
	(*head)->prev = cop;
	(*head) = cop;
}

