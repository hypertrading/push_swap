/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_push.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <vklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 11:31:24 by vklepper          #+#    #+#             */
/*   Updated: 2016/03/11 13:59:12 by vklepper         ###   ########.fr       */
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
	ft_putstr(" pa");
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
	ft_putstr(" pb");
}
