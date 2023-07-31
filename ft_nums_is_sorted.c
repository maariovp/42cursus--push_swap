/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nums_is_sorted.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:17:50 by mavicent          #+#    #+#             */
/*   Updated: 2023/06/19 21:17:53 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_nums_is_sorted(t_nums *nums)
{
	int	i;

	i = 0;
	while (i < nums->size - 1)
	{
		if (nums->nums[i] > nums->nums[i + 1])
			return (0);
		i++;
	}
	return (1);
}
