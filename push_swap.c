/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:19:35 by mavicent          #+#    #+#             */
/*   Updated: 2023/07/30 05:51:00 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_nums		nums;
	t_cmds		cmd;
	t_stacks	stacks;

	if (ac == 1)
		exit (EXIT_FAILURE);
	ft_init_nums(&nums);
	ft_init_cmd(&cmd);
	ft_init_stacks(&stacks);
	ft_parse(ac, av, &nums);
	ft_check_duplicates(&nums);
	if (!ft_nums_is_sorted(&nums))
	{
		ft_nums_to_list(&stacks, &nums);
		if (stacks.size_a <= 3)
			ft_sort_three(&stacks);
		else if (stacks.size_a <= 5)
			ft_sort_five(&stacks);
		else
			ft_sort_more(&stacks, &cmd);
	}
	else
		ft_free_nums(nums.nums);
	ft_list_delete(&stacks);
	return (0);
}
