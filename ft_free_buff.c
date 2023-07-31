/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_buff.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:29:45 by mavicent          #+#    #+#             */
/*   Updated: 2023/07/30 04:08:32 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_buff(char **buff)
{
	int	i;

	if (!buff)
		return ;
	i = 0;
	while (buff[i] != NULL)
	{
		free(buff[i]);
		buff[i] = NULL;
		i++;
	}
	free(buff);
}
