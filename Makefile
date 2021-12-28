NAME		= push_swap

SRCS_PATH	= srcs/

OBJS_PATH	= objs/

HEADERS		= -I ./incl

H			= incl/push_swap.h

SRCS_FILES	= push_swap.c \
				utils.c

OBJS_FILES	= $(SRCS_FILES:.c=.o)

SRCS 		= $(addprefix $(SRCS_PATH), $(SRCS_FILES))

OBJS		:= $(addprefix $(OBJS_PATH), $(OBJS_FILES))

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

all: $(NAME)

bonus: all
	
$(NAME): objs $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(OBJS_PATH)%.o: $(SRCS_PATH)%.c $(H)
	$(CC) $(CFLAGS) $(HEADERS) -o $@ -c $<

objs:
	mkdir $(OBJS_PATH)

clean:
	rm -rf $(OBJS_PATH)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus