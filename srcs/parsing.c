/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <vklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 16:40:49 by vklepper          #+#    #+#             */
/*   Updated: 2016/03/18 13:53:38 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	parsing_flag(char **argv, t_data *data)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = 2;
	while (argv[i])
		i++;
	tmp = i;
	i -= 2;
	if (!(data->stack_a = (int *)malloc(sizeof(int) * (i))))
		ft_error(1);
	if (!(data->stack_b = (int *)malloc(sizeof(int) * (i))))
		ft_error(1);
	while (j++ < tmp)
		data->stack_a[i-- - 1] = ft_atoi(argv[j - 1]);
	data->top_a = tmp - 3;
	data->top_b = -1;
}

void	parsing(char **argv, t_data *data)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = 1;
	while (argv[i])
		i++;
	tmp = i;
	i -= 1;
	if (!(data->stack_a = (int *)malloc(sizeof(int) * (i))))
		ft_error(1);
	if (!(data->stack_b = (int *)malloc(sizeof(int) * (i))))
		ft_error(1);
	while (j++ < tmp)
		data->stack_a[i-- - 1] = ft_atoi(argv[j - 1]);
	data->top_a = tmp - 2;
	data->top_b = -1;
}

int		arguments_checker(char **argv)
{
	int i;
	int j;

	i = 1;
	if (ft_strcmp(argv[1], "-d") == 0)
		i = 2;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			if (argv[i][j] != '-' && ft_isdigit(argv[i][j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
