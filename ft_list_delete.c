/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_delete.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:17:31 by mavicent          #+#    #+#             */
/*   Updated: 2023/06/19 22:09:46 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_list_delete(t_stacks *stacks)
{
	int		i;
	t_stack	*curr;
	t_stack	*temp;

	i = 0;
	curr = stacks->a;
	while (i < stacks->size_a)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
		i++;
	}
	i = 0;
	curr = stacks->b;
	while (i < stacks->size_b)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
		i++;
	}
}
