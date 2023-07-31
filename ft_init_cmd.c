/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:16:51 by mavicent          #+#    #+#             */
/*   Updated: 2023/07/03 18:36:50 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_cmd(t_cmds *cmd)
{
	cmd->do_a = 0;
	cmd->do_b = 0;
	cmd->do_ab = 0;
	cmd->index = 0;
	cmd->step_a = 0;
	cmd->step_b = 0;
	cmd->cmd_total = 0;
	cmd->cmd_a = NULL;
	cmd->cmd_b = NULL;
}
