#include "main.h"
/**
  *f_sub- sustration
  *@head: stack head.
  *@count: line_number.
  *Return: void.
 */
void f_sub(stack_t **head, unsigned int count)
{
	stack_t *aux;
	int sus, node;

	aux = *head;
	for (node = 0; aux != NULL; node++)
		aux = aux->next;
	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}

