/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:19:12 by mavicent          #+#    #+#             */
/*   Updated: 2023/06/19 21:19:14 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_start_sorting(t_stacks *stacks, t_cmds *cmd)
{
	while (stacks->size_b)
	{
		ft_init_cmds(stacks, cmd);
		ft_get_cmds_a(stacks, cmd);
		ft_get_cmds_b(stacks, cmd);
		ft_get_cmds_total(stacks, cmd);
		ft_find_min_cmds(stacks, cmd);
		ft_get_min_cmds(cmd);
		ft_exec_min_cmds(stacks, cmd);
		ft_pa(stacks, 1);
		free(cmd->step_a);
		free(cmd->step_b);
		free(cmd->cmd_a);
		free(cmd->cmd_b);
		free(cmd->cmd_total);
	}
}

void	ft_sort_more(t_stacks *stacks, t_cmds*cmd)
{
	int	min;
	int	min_idx;

	while (stacks->size_a > 5)
		ft_pb(stacks, 1);
	ft_sort_five(stacks);
	ft_start_sorting(stacks, cmd);
	min = ft_find_min(stacks->a);
	min_idx = ft_find_idx(stacks->a, min);
	while (stacks->a->number != min)
	{
		if (min_idx < stacks->size_a / 2)
			ft_ra(stacks, 1);
		else
			ft_rra(stacks, 1);
	}
}
