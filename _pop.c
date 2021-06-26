#include "monty.h"
/**
 * _pop - function that removes the top element of the stack.
 * @ptr: Pointer to the stack head.
 * @cnt: Count
 */
void _pop(stack_t **ptr, unsigned int cnt)
{
	stack_t *back = *ptr;

	if (*ptr == NULL || ptr == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pop an empty stack\n", cnt);
		exit(EXIT_FAILURE);
	}
	(*ptr) = back->next;
	if (back->next)
		back->next->prev = NULL;

	free(back);
}
