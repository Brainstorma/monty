#include "monty.h"
/**
 * add_node - add node to the head of the stack
 * @stack: pointer to the head of the stack
 * @value: value for the new node
 * Return: no return
*/
void add_node(stack_t **stack, int value)
{

	stack_t *new_node, *current;

	current = *stack;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (current)
		current->prev = new_node;
	new_node->n = value;
	new_node->next = *stack;
	new_node->prev = NULL;
	*stack = new_node;
}
