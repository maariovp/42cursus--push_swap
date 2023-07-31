/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_cmds_total.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:16:36 by mavicent          #+#    #+#             */
/*   Updated: 2023/06/19 21:16:39 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_get_cmds_total(t_stacks *stacks, t_cmds *cmd)
{
	int	i;

	i = 1;
	cmd->cmd_total[0] = cmd->step_a[0];
	while (i < stacks->size_b)
	{
		if ((!ft_strncmp(cmd->cmd_a[i], "ra", 10)
				&& !ft_strncmp(cmd->cmd_b[i], "rb", 10))
			|| (!ft_strncmp(cmd->cmd_a[i], "rra", 10)
				&& !ft_strncmp(cmd->cmd_b[i], "rrb", 10)))
		{
			if (cmd->step_a[i] > cmd->step_b[i])
				cmd->cmd_total[i] = cmd->step_a[i];
			else
				cmd->cmd_total[i] = cmd->step_b[i];
		}
		else if ((!ft_strncmp(cmd->cmd_a[i], "ra", 10)
				&& !ft_strncmp(cmd->cmd_b[i], "rrb", 10))
			|| (!ft_strncmp(cmd->cmd_a[i], "rra", 10)
				&& !ft_strncmp(cmd->cmd_b[i], "rb", 10)))
			cmd->cmd_total[i] = cmd->step_a[i] + cmd->step_b[i];
		else if (!cmd->cmd_a[i])
			cmd->cmd_total[i] = cmd->step_b[i];
		i++;
	}
}
