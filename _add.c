#include "monty.h"
/**
 * _add - Adds the top two elements of the stack.
 * @ptr: Pointer to the head of the stack.
 * @cnt: Count.
 */
void _add(stack_t **ptr, unsigned int cnt)
{
	stack_t *mv = *ptr;
	stack_t *stlen = *ptr;
	int lenelem;

	for (lenelem = 0; stlen != NULL; lenelem++)
	stlen = stlen->next;

	if (lenelem < 2)
	{
		dprintf(STDERR_FILENO, "L%d: can't add, stack too short\n", cnt);
		ultrafree(*ptr);
		exit(EXIT_FAILURE);
	}

	mv = (*ptr)->next;
	(*ptr)->next->n += (*ptr)->n;
	free(*ptr);
	mv->prev = NULL;
	(*ptr) = mv;
}

/**
 * _nop - Nothing.
 * @ptr: pointer to the head of the stack
 * @cnt: Number of the current line.
 */
void _nop(stack_t **ptr, unsigned int cnt)
{
	(void)ptr;
	(void)cnt;
}
