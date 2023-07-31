/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_list_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:15:18 by mavicent          #+#    #+#             */
/*   Updated: 2023/06/19 21:15:24 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_list_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	last = *stack;
	if (last)
	{
		while (last->next)
			last = last->next;
		last->next = new;
	}
	else
		*stack = new;
}
