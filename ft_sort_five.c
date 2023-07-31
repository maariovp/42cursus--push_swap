/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:19:03 by mavicent          #+#    #+#             */
/*   Updated: 2023/06/19 21:19:05 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five(t_stacks *stacks)
{
	int	i;
	int	min;
	int	max;

	i = stacks->size_b;
	min = ft_find_min(stacks->a);
	max = ft_find_max(stacks->a);
	while (stacks->size_b - i != 2)
	{
		if (stacks->a->number == min || stacks->a->number == max)
			ft_pb(stacks, 1);
		else
			ft_ra(stacks, 1);
	}
	ft_sort_three(stacks);
	ft_pa(stacks, 1);
	ft_pa(stacks, 1);
	if (stacks->a->number == max)
		ft_ra(stacks, 1);
	else
	{
		ft_sa(stacks, 1);
		ft_ra(stacks, 1);
	}
}
