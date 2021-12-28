#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack;
	char	c;
	size_t	i;

	if (ac == 1)
		return (0);
	stack = (t_stack){}.head = NULL, .tail = NULL, .size = 0};
	i = ac - 1;
	while (i > 0)
		ft_stack_push_front(&stack, ft_stack_new(ft_atoi(av[i--])));
	return (0);
}