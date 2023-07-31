/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <maariovp@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:02:00 by mavicent          #+#    #+#             */
/*   Updated: 2023/06/15 16:02:24 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_min(t_stack *stack)
{
	int		min;
	t_stack	*tmp;

	min = stack->number;
	tmp = stack;
	while (tmp != NULL)
	{
		if (tmp->number < min)
			min = tmp->number;
		tmp = tmp->next;
	}
	return (min);
}
