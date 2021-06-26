#include "monty.h"
/**
 * _pint - Prints the value at the top of the stack.
 * @ptr: Pointer to the head of the stack.
 * @cnt: Count.
 */
void _pint(stack_t **ptr, unsigned int cnt)
{
	cnt += 0;
	if (ptr == NULL || *ptr == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", cnt);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*ptr)->n);
}
