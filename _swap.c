  #include "monty.h"
/**
 * _swap - function that swaps the top two elements of the stack.
 * @ptr: Pointer.
 * @cnt: Count.
 */
void _swap(stack_t **ptr, unsigned int cnt)
{
	stack_t *back = *ptr;
	stack_t *stlen = *ptr;
	int tmp, lenelem;

		for (lenelem = 0; stlen != NULL; lenelem++)
		stlen = stlen->next;

	if (lenelem < 2)
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n", cnt);
		ultrafree(*ptr);
		exit(EXIT_FAILURE);
	}

	tmp = back->n;
	back->n = back->next->n;
	back->next->n = tmp;

}
