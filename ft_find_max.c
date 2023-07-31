/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:16:09 by mavicent          #+#    #+#             */
/*   Updated: 2023/07/03 17:28:01 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_max(t_stack *stack)
{
	int		max;
	t_stack	*tmp;

	max = stack->number;
	tmp = stack;
	while (tmp != NULL)
	{
		if (tmp->number > max)
			max = tmp->number;
		tmp = tmp->next;
	}
	return (max);
}
