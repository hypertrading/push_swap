/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_swap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <vklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 11:10:03 by vklepper          #+#    #+#             */
/*   Updated: 2016/03/17 15:09:57 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	f_sa(t_data *d)
{
	int tmp;

	tmp = d->stack_a[d->top_a];
	d->stack_a[d->top_a] = d->stack_a[d->top_a - 1];
	d->stack_a[d->top_a - 1] = tmp;
	if (d->space == 1)
		ft_putstr("\033[1;32m sa\033[0m");
	else
	{
		ft_putstr("\033[1;32msa\033[0m");
		d->space = 1;
	}
	d->nbr_mv++;
}

void	f_sb(t_data *d)
{
	int tmp;

	tmp = d->stack_b[d->top_b];
	d->stack_b[d->top_b] = d->stack_b[d->top_b - 1];
	d->stack_b[d->top_b - 1] = tmp;
	if (d->space == 1)
		ft_putstr(" sb");
	else
	{
		ft_putstr("sb");
		d->space = 1;
	}
	d->nbr_mv++;
}

void	f_ss(t_data *d)
{
	f_sa(d);
	f_sb(d);
}
