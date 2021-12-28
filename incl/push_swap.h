#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef enum s_bool
{
	FALSE,
	TRUE
}			t_bool;

typedef struct s_selem
{
	int		val;
	t_bool	keep;
	struct s_selem *next;
	struct s_selem *prev;
}				t_selem;

typedef struct s_stack
{
	t_selem *head;
	t_selem *tail;
	size_t size;
}				t_stack;

/*utils functions | utils.c*/

void	ft_putchar_fd(char c, int fd);
int		ft_strlen(char *s);
int		ft_atoi(const char *str);
t_bool	ft_malloc(void **ptr, size_t n);

/* stack modification functions | stack_utils.c stack_ops.c */ 

t_selem	*ft_stk_new(int n);
t_bool	ft_stk_push_front(t_stack *stack, t_selem *elem);
t_bool	ft_stk_push_back(t_stack *stack, t_selem *elem);

void	ft_stk_rot(t_stack *stack);
void	ft_stk_rrot(t_stack *stack);
void	ft_stk_swap(t_stack *stack);
void	ft_stk_push(t_stack *stack);

#endif