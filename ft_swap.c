/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:19:27 by mavicent          #+#    #+#             */
/*   Updated: 2023/07/03 16:55:31 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stacks *stacks, int flag)
{
	t_stack	*tmp;

	if (stacks->size_a < 2)
		return ;
	tmp = stacks->a->next;
	stacks->a->next = stacks->a->next->next;
	tmp->next = stacks->a;
	stacks->a = tmp;
	if (flag)
		write(STDOUT_FILENO, "sa\n", 3);
}

void	ft_sb(t_stacks *stacks, int flag)
{
	t_stack	*tmp;

	if (stacks->size_b < 2)
		return ;
	tmp = stacks->b->next;
	stacks->b->next = stacks->b->next->next;
	tmp->next = stacks->b;
	stacks->b = tmp;
	if (flag)
		write(STDOUT_FILENO, "sb\n", 3);
}

void	ft_ss(t_stacks *stacks, int flag)
{
	ft_sa(stacks, 0);
	ft_sb(stacks, 0);
	if (flag)
		write(STDOUT_FILENO, "ss\n", 3);
}
