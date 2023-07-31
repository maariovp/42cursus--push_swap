/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:18:28 by mavicent          #+#    #+#             */
/*   Updated: 2023/07/03 16:55:12 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stacks *stacks, int flag)
{
	t_stack	*tmp_1;
	t_stack	*tmp_2;

	if (stacks->size_a < 2)
		return ;
	tmp_1 = stacks->a;
	while (tmp_1->next)
		tmp_1 = tmp_1->next;
	tmp_2 = stacks->a->next;
	stacks->a->next = 0;
	tmp_1->next = stacks->a;
	stacks->a = tmp_2;
	if (flag)
		write(STDOUT_FILENO, "ra\n", 3);
}

void	ft_rb(t_stacks *stacks, int flag)
{
	t_stack	*tmp_1;
	t_stack	*tmp_2;

	if (stacks->size_b < 2)
		return ;
	tmp_1 = stacks->b;
	while (tmp_1->next)
		tmp_1 = tmp_1->next;
	tmp_2 = stacks->b->next;
	stacks->b->next = 0;
	tmp_1->next = stacks->b;
	stacks->b = tmp_2;
	if (flag)
		write(STDOUT_FILENO, "rb\n", 3);
}

void	ft_rr(t_stacks *stacks, int flag)
{
	ft_ra(stacks, 0);
	ft_rb(stacks, 0);
	if (flag)
		write(STDOUT_FILENO, "rr\n", 3);
}
