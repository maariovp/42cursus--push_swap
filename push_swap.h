/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <maariovp@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:13:29 by mavicent          #+#    #+#             */
/*   Updated: 2023/07/03 17:36:59 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack	t_stack;

struct	s_stack
{
	int			number;
	int			index;
	t_stack		*next;
};

typedef struct s_stacks
{
	t_stack		*a;
	t_stack		*b;
	int			size_a;
	int			size_b;
}	t_stacks;

typedef struct s_nums
{
	int		*nums;
	int		size;
}	t_nums;

typedef struct s_cmds
{
	int				do_a;
	int				do_b;
	int				do_ab;
	int				index;
	int				*step_a;
	int				*step_b;
	int				*cmd_total;
	char			**cmd_a;
	char			**cmd_b;
}	t_cmds;

void	ft_error(void);

void	ft_parse(int argc, char **argv, t_nums *nums);

void	ft_check_duplicates(t_nums *nums);

void	ft_check_isdigit(int *nums, char **buff, char *str);

int		ft_find_idx(t_stack *stack, int number);

int		ft_find_max(t_stack *stack);

int		ft_find_min(t_stack *stack);

int		ft_nums_is_sorted(t_nums *nums);

void	ft_nums_to_list(t_stacks *stacks, t_nums *nums);

void	ft_free_buff(char **buff);

void	ft_free_nums(int *nums);

int		ft_list_is_sorted(t_stack *stack);

t_stack	*ft_list_new(int number, int index);

void	ft_list_add_back(t_stack **stack, t_stack *new);

void	ft_list_add_front(t_stack **stack, t_stack *new);

void	ft_list_delete(t_stacks *stacks);

void	ft_init_nums(t_nums *nums);

void	ft_init_cmd(t_cmds *cmd);

void	ft_init_cmds(t_stacks *stacks, t_cmds *cmd);

void	ft_init_stacks(t_stacks *stacks);

void	ft_pa(t_stacks *stacks, int flag);

void	ft_pb(t_stacks *stacks, int flag);

void	ft_ra(t_stacks *stacks, int flag);

void	ft_rb(t_stacks *stacks, int flag);

void	ft_rr(t_stacks *stacks, int flag);

void	ft_rra(t_stacks *stacks, int flag);

void	ft_rrb(t_stacks *stacks, int flag);

void	ft_rrr(t_stacks *stacks, int flag);

void	ft_sa(t_stacks *stacks, int flag);

void	ft_sb(t_stacks *stacks, int flag);

void	ft_ss(t_stacks *stacks, int flag);

void	ft_sort_three(t_stacks *stacks);

void	ft_sort_five(t_stacks *stacks);

void	ft_sort_more(t_stacks *stacks, t_cmds *cmd);

void	ft_get_cmds_a(t_stacks *stacks, t_cmds *cmd);

void	ft_get_cmds_b(t_stacks *stacks, t_cmds *cmd);

void	ft_get_cmds_total(t_stacks *stacks, t_cmds *cmd);

void	ft_find_min_cmds(t_stacks *stacks, t_cmds *cmd);

void	ft_get_min_cmds(t_cmds *cmd);

void	ft_exec_min_cmds(t_stacks *stacks, t_cmds *cmd);

#endif
