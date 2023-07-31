/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:17:24 by mavicent          #+#    #+#             */
/*   Updated: 2023/06/19 21:17:26 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_list_add_front(t_stack **stack, t_stack *new)
{
	new->next = *stack;
	*stack = new;
}
