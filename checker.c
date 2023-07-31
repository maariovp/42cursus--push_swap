/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:03:06 by mavicent          #+#    #+#             */
/*   Updated: 2023/07/03 17:20:14 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_invalid(t_stacks *stacks, char *line)
{
	ft_list_delete(stacks);
	free(line);
	ft_error();
}

static void	ft_exec_cmds(t_stacks *stacks, char *line)
{
	if (!ft_strncmp(line, "sa", 10))
		ft_sa(stacks, 0);
	else if (!ft_strncmp(line, "sb", 10))
		ft_sb(stacks, 0);
	else if (!ft_strncmp(line, "ss", 10))
		ft_ss(stacks, 0);
	else if (!ft_strncmp(line, "pa", 10))
		ft_pa(stacks, 0);
	else if (!ft_strncmp(line, "pb", 10))
		ft_pb(stacks, 0);
	else if (!ft_strncmp(line, "ra", 10))
		ft_ra(stacks, 0);
	else if (!ft_strncmp(line, "rb", 10))
		ft_rb(stacks, 0);
	else if (!ft_strncmp(line, "rr", 10))
		ft_rr(stacks, 0);
	else if (!ft_strncmp(line, "rra", 10))
		ft_rra(stacks, 0);
	else if (!ft_strncmp(line, "rrb", 10))
		ft_rrb(stacks, 0);
	else if (!ft_strncmp(line, "rrr", 10))
		ft_rrr(stacks, 0);
	else
		ft_invalid(stacks, line);
}

static void	ft_read_cmds(t_stacks *stacks)
{
	char	*line;

	line = get_next_line(STDIN_FILENO);
	while (ft_strlen(line) != 0)
	{
		ft_exec_cmds(stacks, line);
		free(line);
		line = get_next_line(STDIN_FILENO);
	}
}

int	main(int ac, char **av)
{
	t_nums		nums;
	t_stacks	stacks;

	if (ac == 1)
		exit(EXIT_FAILURE);
	ft_init_nums(&nums);
	ft_init_stacks(&stacks);
	ft_parse(ac, av, &nums);
	ft_check_duplicates(&nums);
	ft_nums_to_list(&stacks, &nums);
	ft_read_cmds(&stacks);
	if (ft_list_is_sorted(stacks.a) && stacks.size_b == 0)
		write(STDOUT_FILENO, "OK\n", 3);
	else
		write (STDOUT_FILENO, "KO\n", 3);
	ft_list_delete(&stacks);
	return (0);
}
