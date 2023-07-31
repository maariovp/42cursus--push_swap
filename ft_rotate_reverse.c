/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:18:36 by mavicent          #+#    #+#             */
/*   Updated: 2023/07/03 16:55:47 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stacks *stacks, int flag)
{
	t_stack	*tmp;

	if (stacks->size_a < 2)
		return ;
	tmp = stacks->a;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = stacks->a;
	stacks->a = tmp->next;
	tmp->next = 0;
	if (flag)
		write(STDOUT_FILENO, "rra\n", 4);
}

void	ft_rrb(t_stacks *stacks, int flag)
{
	t_stack	*tmp;

	if (stacks->size_b < 2)
		return ;
	tmp = stacks->b;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = stacks->b;
	stacks->b = tmp->next;
	tmp->next = 0;
	if (flag)
		write(STDOUT_FILENO, "rrb\n", 4);
}

void	ft_rrr(t_stacks *stacks, int flag)
{
	ft_rra(stacks, 0);
	ft_rrb(stacks, 0);
	if (flag)
		write(STDOUT_FILENO, "rrr\n", 4);
}
