#include "monty.h"
/**
 * _push - OpCode Push
 * @ptr: Pointer.
 * @cnt: Count.
 */
void _push(stack_t **ptr,  unsigned int cnt)
{
	stack_t *new;
	int stacknum = 0;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		ultrafree(new);
		exit(EXIT_FAILURE); }

	if (!gl.num && gl.num != 0)
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", cnt);
		ultrafree((*ptr));
		free(new);
		exit(EXIT_FAILURE);
	}

	if (gl.num)
	{
		stacknum = atoi(gl.num);
		new->n = stacknum;
		new->next = *ptr;
		new->prev = NULL;
		if (*ptr)
			(*ptr)->prev = new;
		*ptr = new;
	}
	else
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", cnt);
		ultrafree((*ptr));
		free(new);
		exit(EXIT_FAILURE);
	}
}

/**
 *  _pall - Prints all the elements
 * @ptr: Pointer.
 * @cnt: Count.
 */
void _pall(stack_t **ptr, unsigned int cnt)
{
	stack_t *temp;

	cnt += 0;

	temp = *ptr;
	for (; temp; temp = temp->next)
		printf("%d\n", temp->n);
}
