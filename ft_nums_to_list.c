/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nums_to_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:18:00 by mavicent          #+#    #+#             */
/*   Updated: 2023/07/03 18:40:00 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_nums_to_list(t_stacks *stacks, t_nums *nums)
{
	int		i;
	t_stack	*list;

	i = 0;
	while (i < nums->size)
	{
		list = ft_list_new(nums->nums[i], -1);
		if (!list)
			exit(EXIT_FAILURE);
		ft_list_add_back(&stacks->a, list);
		stacks->size_a++;
		i++;
	}
	free(nums->nums);
}
