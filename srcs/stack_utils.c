#include "push_swap.h"

t_selem	*ft_stk_new(int n)
{
	t_selem *new;

	if (!ft_malloc((void *)&new, sizeof(t_selem)))
		return (NULL);
	new->val = n;
	new->keep = FALSE;
	new->prev = NULL;
	new->next = NULL;
	return (new);	
}

t_bool	ft_stk_push_front(t_stack *stack, t_selem *elem)
{
	if (!elem)
		return (FALSE);
	if (!stack->size)
	{
		stack->head = elem;
		stack->tail = elem;
	}
	else
	{
		stack->head->prev = elem;
		elem->next = stack->head;
		stack->head = elem;
	}
	stack->size++;
	return (TRUE);
}

t_bool	ft_stk_push_back(t_stack *stack, t_selem *elem)
{
	if(!elem)
		return (FALSE);
	if (!stack->size)
	{
		stack->head = elem;
		stack->tail = elem;	
	}
	else
	{
		stack->tail->next = elem;
		elem->prev = stack->tail;
		stack->tail = elem;
	}
	stack->size++;
	return (TRUE);
}

