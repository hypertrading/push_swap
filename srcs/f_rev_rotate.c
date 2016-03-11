/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_rev_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <vklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 13:14:22 by vklepper          #+#    #+#             */
/*   Updated: 2016/03/11 13:25:40 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	f_rra(t_data *d)
{
	int tmp;
	int i;

	tmp = d->stack_a[0];
	i = 0;
	while (i < d->top_a)
	{
		d->stack_a[i] = d->stack_a[i + 1];
		i++;
	}
	d->stack_a[i] = tmp;
}

void	f_rrb(t_data *d)
{
	int tmp;
	int i;

	tmp = d->stack_b[0];
	i = 0;
	while (i < d->top_b)
	{
		d->stack_b[i] = d->stack_b[i + 1];
		i++;
	}
	d->stack_b[i] = tmp;
}

void	f_rrr(t_data *d)
{
	f_rra(d);
	f_rrb(d);
}
