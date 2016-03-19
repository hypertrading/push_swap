/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <vklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 12:52:23 by vklepper          #+#    #+#             */
/*   Updated: 2016/03/15 23:13:22 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	f_ra(t_data *d)
{
	int tmp;
	int i;

	i = d->top_a;
	tmp = d->stack_a[d->top_a];
	while (i >= 0)
	{
		d->stack_a[i] = d->stack_a[i - 1];
		i--;
	}
	d->stack_a[0] = tmp;
	if (d->space == 1)
		ft_putstr(" ra");
	else
	{
		ft_putstr("ra");
		d->space = 1;
	}
	d->nbr_mv++;
}

void	f_rb(t_data *d)
{
	int tmp;
	int i;

	i = d->top_b;
	tmp = d->stack_b[d->top_b];
	while (i >= 0)
	{
		d->stack_b[i] = d->stack_b[i - 1];
		i--;
	}
	d->stack_b[0] = tmp;
	if (d->space == 1)
		ft_putstr(" rb");
	else
	{
		ft_putstr("rb");
		d->space = 1;
	}
	d->nbr_mv++;
}

void	ff_rr(t_data *d)
{
	f_ra(d);
	f_rb(d);
}
