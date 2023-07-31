/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:15:29 by mavicent          #+#    #+#             */
/*   Updated: 2023/07/30 05:45:14 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_isdigit(int *nums, char **buff, char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		ft_free_buff(buff);
		ft_free_nums(nums);
		ft_error();
	}
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			ft_free_buff(buff);
			ft_free_nums(nums);
			ft_error();
		}
		i++;
	}
}

void	ft_check_duplicates(t_nums *nums)
{
	int	i;
	int	j;

	i = 0;
	while (i < nums->size)
	{
		j = 0;
		while (j < nums->size)
		{
			if (i != j && nums->nums[i] == nums->nums[j])
			{
				ft_free_nums(nums->nums);
				ft_error();
			}
			j++;
		}
		i++;
	}
}
