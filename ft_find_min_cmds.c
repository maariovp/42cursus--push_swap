/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min_cmds.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:16:20 by mavicent          #+#    #+#             */
/*   Updated: 2023/06/19 21:16:23 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_min_cmds(t_stacks *stacks, t_cmds *cmd)
{
	int	i;
	int	min_cmd;

	i = 1;
	min_cmd = cmd->cmd_total[0];
	cmd->index = 0;
	while (i < stacks->size_b)
	{
		if (cmd->cmd_total[i] < min_cmd)
		{
			min_cmd = cmd->cmd_total[i];
			cmd->index = i;
		}
		i++;
	}
}
