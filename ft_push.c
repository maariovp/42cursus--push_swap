/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:18:15 by mavicent          #+#    #+#             */
/*   Updated: 2023/07/03 16:55:59 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stacks *stacks, int flag)
{
	t_stack	*tmp;
	t_stack	*new;

	if (!stacks->size_b)
		return ;
	tmp = stacks->b;
	stacks->size_a++;
	new = ft_list_new(stacks->b->number, stacks->b->index);
	if (!new)
		exit(EXIT_FAILURE);
	ft_list_add_front(&stacks->a, new);
	stacks->b = stacks->b->next;
	free(tmp);
	stacks->size_b--;
	if (flag)
		write(STDOUT_FILENO, "pa\n", 3);
}

void	ft_pb(t_stacks *stacks, int flag)
{
	t_stack	*tmp;
	t_stack	*new;

	if (!stacks->size_a)
		return ;
	tmp = stacks->a;
	stacks->size_b++;
	new = ft_list_new(stacks->a->number, stacks->a->index);
	if (!new)
		exit(EXIT_FAILURE);
	ft_list_add_front(&stacks->b, new);
	stacks->a = stacks->a->next;
	free(tmp);
	stacks->size_a--;
	if (flag)
		write(STDOUT_FILENO, "pb\n", 3);
}
