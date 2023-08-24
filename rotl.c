#include "main.h"
/**
  *f_rotl- rotates stack to top.
  *@head: stack head
  *@count: line_number
  *Return: void.
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *tmp = *head, *sus;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	sus = (*head)->next;
	sus->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = sus;
}

