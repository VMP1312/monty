#include "monty.h"
/**
 * op_cmd - OpCommands.
 * @cmd: command.
 * @ptr: Pointer.
 * @cnt: Count.
 */
void op_cmd(stack_t **ptr, unsigned int cnt, char *cmd)
{
	int mv = 0;

	instruction_t op[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{NULL, NULL}
	};

	while (op[mv].opcode)
	{
		if (strcmp(op[mv].opcode, cmd) == 0)
		{
			op[mv].f(ptr, cnt);
			break;
		}
		mv++;
	}

	if (op[mv].f == NULL)
	{
		dprintf(2, "L%d: unknown instruction %s\n", cnt, cmd);
		ultrafree((*ptr));
		exit(EXIT_FAILURE);
	}

}
















