/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_swap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <vklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 11:10:03 by vklepper          #+#    #+#             */
/*   Updated: 2016/03/11 11:30:53 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	f_sa(t_data *d)
{
	int tmp;

	tmp = d->stack_a[d->top_a];	
	d->stack_a[d->top_a] = d->stack_a[d->top_a - 1];
	d->stack_a[d->top_a - 1] = tmp;
}

void	f_sb(t_data *d)
{
	int tmp;

	tmp = d->stack_b[d->top_b];	
	d->stack_b[d->top_b] = d->stack_b[d->top_b - 1];
	d->stack_b[d->top_b - 1] = tmp;
}

void f_ss(t_data *d)
{
	f_sa(d);
	f_sb(d);
}

