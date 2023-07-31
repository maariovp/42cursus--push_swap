/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:19:19 by mavicent          #+#    #+#             */
/*   Updated: 2023/06/19 22:14:49 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stacks *stacks)
{
	int	max;

	max = ft_find_max(stacks->a);
	if (stacks->size_a == 1)
		return ;
	else if (stacks->size_a == 2)
	{
		if (stacks->a->number > stacks->a->next->number)
			ft_sa(stacks, 1);
	}
	else if (stacks->size_a == 3)
	{
		if (stacks->a->number == max)
			ft_ra(stacks, 1);
		if (stacks->a->next->number == max)
			ft_rra(stacks, 1);
		if (stacks->a->number > stacks->a->next->number)
			ft_sa(stacks, 1);
	}
}
