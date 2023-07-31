NAME = push_swap
NAME_BONUS = checker

LIBFT_NAME = libft.a
LIBFT_PATH = ./libft

UTILS = ft_get_cmds.c\
        ft_check.c\
        ft_error.c\
        ft_exec_min_cmds.c\
        ft_find_idx.c\
        ft_find_max.c\
        ft_find_min_cmds.c\
        ft_find_min.c\
        ft_free_buff.c\
        ft_free_nums.c\
        ft_get_cmds_total.c\
        ft_get_min_cmds.c\
        ft_init_cmd.c\
        ft_init_cmds.c\
        ft_init_nums.c\
        ft_init_stacks.c\
        ft_list_add_back.c\
        ft_list_add_front.c\
        ft_list_delete.c\
        ft_list_is_sorted.c\
        ft_list_new.c\
        ft_nums_to_list.c\
        ft_nums_is_sorted.c\
        ft_parse.c\
        ft_push.c\
        ft_rotate_reverse.c\
        ft_sort_five.c\
        ft_rotate.c\
        ft_sort_more.c\
        ft_sort_three.c\
        ft_swap.c\

SRCS = push_swap.c $(UTILS)
SRCS_BONUS = checker.c $(UTILS)

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
LDLIBS = -L $(LIBFT_PATH) -lft

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_NAME)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LDLIBS)

bonus: $(OBJS_BONUS) $(LIBFT_NAME)
	@$(CC) $(CFLAGS) -o $(NAME_BONUS) $(OBJS_BONUS) $(LDLIBS)

$(LIBFT_NAME):
	make -C $(LIBFT_PATH) bundle

%.o: %.c
	@$(CC) $(CFLAGS) -o $(@) -c $(<)

clean:
	rm -rf $(OBJS) $(OBJS_BONUS)
	make -C $(LIBFT_PATH) clean

fclean: clean
	rm -rf $(NAME) $(NAME_BONUS)
	make -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all clean fclean re bonus
