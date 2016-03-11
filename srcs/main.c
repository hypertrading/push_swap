/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <vklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 00:08:18 by vklepper          #+#    #+#             */
/*   Updated: 2016/03/11 14:17:38 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(int i)
{
	if(i == 0)
		ft_putstr("Error : argument no valide");
	if(i == 1)
		ft_putstr("Error malloc");
}

void	parsing(char **argv, t_data *data)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while(argv[i])
		i++;
	if(!(data->stack_a = (int *)malloc(sizeof(int) * (i))))
		ft_error(1);
	if(!(data->stack_b = (int *)malloc(sizeof(int) * (i))))
		ft_error(1);
	while (j < i)
	{
		data->stack_a[j - 1] = ft_atoi(argv[j]);
		j++;
	}
	data->top_a = j - 2;
	data->top_b = -1;
}

void print_etat(t_data *data)
{
	int i;

	i = 0;
	ft_putstr("Stack a :");
	while(i <= data->top_a && data->top_a >= 0)
	{
		ft_putnbr(data->stack_a[i]);
		i++;
	}
	ft_putstr("\nNbr elements :");
	ft_putnbr(data->top_a);
	ft_putchar('\n');
	i = 0;
	ft_putstr("Stack b :");
	while(i <= data->top_b && data->top_b >= 0)
	{
		ft_putnbr(data->stack_b[i]);
		i++;
	}
	ft_putstr("\nNbr elements :");
	ft_putnbr(data->top_b);
	ft_putstr("\n--------------\n");
	
}

void	solve(t_data *d)
{
	int min_in_a;

	min_in_a = d->stack_a[0];
	while(1)
	{	
		if (d->stack_a[d->top_a] == min_in_a)
		{
			f_pb(d);
			if(d->top_a < 0)
				break;
			min_in_a = d->stack_a[d->top_a];
		}
		else if (d->stack_a[d->top_a] < min_in_a)
			min_in_a = d->stack_a[d->top_a];
		f_ra(d);
	}
	while(d->top_b >= 0)
		f_pa(d);
}

void	push_swap(char **argv)
{
	t_data data;

	parsing(argv, &data);
	print_etat(&data);
	solve(&data);
	ft_putstr("\n");
	print_etat(&data);
	free(data.stack_a);
	free(data.stack_b);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		ft_error(0);
	else
		push_swap(argv);
	return 0;
}
