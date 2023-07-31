/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:43:18 by mavicent          #+#    #+#             */
/*   Updated: 2023/07/03 19:43:18 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_error(int *nums, char **buff)
{
	int	i;

	if (nums == NULL || buff == NULL)
		return ;
	i = 0;
	while (buff[i] != NULL)
	{
		free(buff[i]);
		i++;
	}
	free(nums);
	free(buff);
	write(STDERR_FILENO, "Error\n", 6);
	exit(EXIT_FAILURE);
}

int	ft_atoi(int *nums, char **buff, const char *nptr)
{
	long long	res;
	int			neg;

	res = 0;
	neg = 1;
	if (nptr == NULL)
		return (0);
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-')
	{
		neg = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		res = (res * 10) + (*nptr - '0');
		if ((res * neg) > INT_MAX || (res * neg) < INT_MIN)
			ft_error(nums, buff);
		nptr++;
	}
	return (res * neg);
}
