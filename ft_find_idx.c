/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_idx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:15:56 by mavicent          #+#    #+#             */
/*   Updated: 2023/07/03 17:27:43 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_idx(t_stack *stack, int number)
{
	int		idx;
	t_stack	*tmp;

	idx = 0;
	tmp = stack;
	while (tmp != NULL)
	{
		if (tmp->number == number)
			return (idx);
		idx++;
		tmp = tmp->next;
	}
	return (idx);
}
