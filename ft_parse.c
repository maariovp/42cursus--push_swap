/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:18:08 by mavicent          #+#    #+#             */
/*   Updated: 2023/07/30 04:09:44 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_fill(t_nums *nums, char **buff)
{
	int	i;
	int	*tmp;

	i = 0;
	while (buff[i])
		i++;
	tmp = nums->nums;
	nums->nums = (int *)ft_calloc(sizeof(int), nums->size + i);
	if (!nums->nums)
		exit(EXIT_FAILURE);
	i = -1;
	while (++i < nums->size)
		nums->nums[i] = tmp[i];
	if (tmp)
		free(tmp);
	i = -1;
	while (buff[++i])
	{
		ft_check_isdigit(nums->nums, buff, buff[i]);
		nums->nums[nums->size++] = ft_atoi(nums->nums, buff, buff[i]);
	}
}

void	ft_parse(int argc, char **argv, t_nums *nums)
{
	int		i;
	char	**buff;

	i = 0;
	while (++i < argc)
	{
		buff = ft_split(argv[i], ' ');
		if (!buff)
			exit(EXIT_FAILURE);
		ft_fill(nums, buff);
		ft_free_buff(buff);
		buff = NULL;
	}
}
