/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_push.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <vklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 11:31:24 by vklepper          #+#    #+#             */
/*   Updated: 2016/03/17 15:09:02 by vklepper         ###   ########.fr       */
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
		ft_putstr(" pa");
	else
	{
		ft_putstr("pa");
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
		ft_putstr(" pb");
	else
	{
		ft_putstr("pb");
		d->space = 1;
	}
	d->nbr_mv++;
}
