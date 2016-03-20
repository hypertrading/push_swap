/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_push.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <vklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 11:31:24 by vklepper          #+#    #+#             */
/*   Updated: 2016/03/20 18:45:00 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	f_pa(t_data *d)
{
	if (d->top_b >= 0)
	{
		d->stack_a[d->top_a + 1] = d->stack_b[d->top_b];
		d->top_b--;
		d->top_a++;
	}
	if (d->space == 1)
		ft_putstr("\x1B[34m pa\033[0m");
	else
	{
		ft_putstr("\x1B[34mpa\033[0m");
		d->space = 1;
	}
	d->nbr_mv++;
}

void	f_pb(t_data *d)
{
	if (d->top_a >= 0)
	{
		d->stack_b[d->top_b + 1] = d->stack_a[d->top_a];
		d->stack_a[d->top_a] = 0;
		d->top_a--;
		d->top_b++;
	}
	if (d->space == 1)
		ft_putstr("\x1B[36m pb\033[0m");
	else
	{
		ft_putstr("\x1B[36mpb\033[0m");
		d->space = 1;
	}
	d->nbr_mv++;
}
