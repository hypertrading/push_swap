/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <vklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 00:08:18 by vklepper          #+#    #+#             */
/*   Updated: 2016/03/15 17:17:18 by vklepper         ###   ########.fr       */
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

void print_etat(t_data *data)
{
	int i;

	i = 0;
	ft_putstr("--------------\n");
	ft_putstr("Stack a :");
	while(i <= data->top_a && data->top_a >= 0)
	{
		ft_putnbr(data->stack_a[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	i = 0;
	ft_putstr("Stack b :");
	while(i <= data->top_b && data->top_b >= 0)
	{
		ft_putnbr(data->stack_b[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putstr("\n--------------\n");
}

void	solve(t_data *d)
{
	int min_in_a;

	min_in_a = d->stack_a[0];
	while(d->top_a > 0)
	{	
		if (d->stack_a[d->top_a] == min_in_a)
		{
			f_pb(d);
			ft_putstr("pb ");
			min_in_a = d->stack_a[d->top_a];
		}
		else if (d->stack_a[d->top_a] < min_in_a)
			min_in_a = d->stack_a[d->top_a];
		f_ra(d);
		ft_putstr("ra ");
	}
	while(d->top_b >= 0)
	{
		if(d->top_b - 1 < 0)
			ft_putstr("pa");
		else
			ft_putstr("pa ");
		f_pa(d);
	}
}

void	push_swap(char **argv)
{
	t_data data;

	if(ft_strcmp(argv[1], "-d") == 0)
	{
		parsing_flag(argv, &data);
		print_etat(&data);
		solve(&data);
		ft_putstr("\n");
		print_etat(&data);
	}
	else
	{
		parsing(argv, &data);
		solve(&data);
	}
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
