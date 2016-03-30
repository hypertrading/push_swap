/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <vklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 00:08:18 by vklepper          #+#    #+#             */
/*   Updated: 2016/03/30 21:05:59 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap(char **argv)
{
	t_data data;

	data.space = 0;
	data.nbr_mv = 0;
	if (arguments_checker(argv) == 0)
		return (ft_error(0));
	if (ft_strcmp(argv[1], "-v") == 0)
	{
		parsing_flag(argv, &data);
		print_etat(&data);
		if (opti_solve(&data) == 1)
			brute_solve(&data);
		print_etat(&data);
	}
	else
	{
		parsing(argv, &data);
		if (opti_solve(&data) == 1)
			brute_solve(&data);
	}
	free(data.stack_a);
	free(data.stack_b);
}

int		main(int argc, char **argv)
{
	if (argc == 1 || (ft_strcmp(argv[1], "-v") == 0 && argc == 2))
		return (0);
	if (argc < 2 || (ft_strcmp(argv[1], "-v") == 0 && argc < 3))
		ft_error(0);
	else
		push_swap(argv);
	return (0);
}
