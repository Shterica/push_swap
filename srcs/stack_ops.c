#include "push_swap.h"

void	ft_stk_rot(t_stack *stack)
{
	if (stack->size < 2)
		return ;
	stack->tail->next = stack->head;
	stack->head = stack->head->next;
	stack->head->prev = NULL;
	stack->tail->next->next = NULL;
	stack->tail->next->prev = stack->tail;
	stack->tail = stack->tail->next;
}

void	ft_stk_rrot(t_stack *stack)
{
	stack->head->prev = stack->tail;
	stack->tail = stack->tail->prev;
	stack->tail->next = NULL;
	stack->head->prev->prev = NULL;
	stack->head->prev->next = stack->head;
	stack->head = stack->head->prev;
}

void	ft_stk_swap(t_stack *stack)
{
	t_selem *new_head;

	if (stack->size < 2)
		return ;
	new_head = stack->head->next;
	stack->head->next = new_head->next;
	stack->head->prev = new_head;
	new_head->next = stack->head;
	new_head->prev = NULL;
	stack->head = new_head;
	if (stack->size == 2)
		stack->tail = new_head->next;
}

t_selem	ft_stk_harvest_top(t_stack *stack)
{
	t_selem *elem;

	if (!stack->size)
		return (NULL);
	elem = stack->head;
	stack->head = stack->head->next;
	elem->next = NULL;
	if (stack->size == 1)
		stack->tail = NULL;
	else
		stack->head->prev = NULL;
	stack->size--;
	return (elem);
}