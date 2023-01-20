#include "monty.h"
/**
 * divide_top_two - divides the top two elements of the stack.
 * @stack: pointer to the head of the stack
 * @line_num: line number
 * Return: no return
*/
void divide_top_two(stack_t **stack, unsigned int line_num)
{
	stack_t *current;
	int stack_len = 0, quotient;

	current = *stack;
	while (current)
	{
		current = current->next;
		stack_len++;
	}
	if (stack_len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	current = *stack;
	if (current->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	quotient = current->next->n / current->n;
	current->next->n = quotient;
	*stack = current->next;
	free(current);
}
