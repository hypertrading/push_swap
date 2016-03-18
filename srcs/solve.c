/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <vklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 13:31:07 by vklepper          #+#    #+#             */
/*   Updated: 2016/03/18 18:32:27 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	last_elem_swap(t_data *d)
{
	f_rra(d);
	f_rra(d);
	f_sa(d);
	f_ra(d);
	f_ra(d);
	return (0);
}

static int	one_swap(t_data *d)
{
	int i;

	i = 0;
	if (d->stack_a[d->top_a] > d->stack_a[d->top_a - 1])
	{
		f_sa(d);
		return (0);
	}
	if (d->stack_a[0] < d->stack_a[1])
		return (last_elem_swap(d));
	while (d->stack_a[d->top_a] < d->stack_a[d->top_a - 1])
	{
		f_ra(d);
		i++;
	}
	while (i >= 0)
	{
		if (d->stack_a[d->top_a] > d->stack_a[d->top_a - 1])
			f_sa(d);
		if (i > 0)
			f_rra(d);
		i--;
	}
	return (0);
}

int			solve_three(t_data *d)
{
	if (d->stack_a[2] > d->stack_a[1] && d->stack_a[1] > d->stack_a[0])
		f_ra(d);
	if (d->stack_a[2] > d->stack_a[1] && d->stack_a[1] < d->stack_a[0])
		f_sa(d);
	if (d->stack_a[2] < d->stack_a[1] && d->stack_a[1] > d->stack_a[0])
		f_rra(d);
	if (d->stack_a[2] > d->stack_a[1] && d->stack_a[1] < d->stack_a[0])
		f_sa(d);
	ft_putchar('\n');
	return (0);
}

int			opti_solve(t_data *d)
{
	int top;
	int count;
	int max;

	top = d->top_a;
	count = 0;
	max = d->stack_a[top];
	if (top == 2)
		return (solve_three(d));
	while (top >= 0)
	{
		if (d->stack_a[top] > max)
			max = d->stack_a[top];
		if (d->stack_a[top] < max)
			count++;
		top--;
	}
	if (count == 1)
		return (one_swap(d));
	if (count == 0)
		return (0);
	return (1);
}

void		brute_solve(t_data *d)
{
	int min_in_a;

	min_in_a = d->stack_a[0];
	while (d->top_a > 0)
	{
		if (d->stack_a[d->top_a] == min_in_a)
		{
			f_pb(d);
			min_in_a = d->stack_a[d->top_a];
		}
		else if (d->stack_a[d->top_a] < min_in_a)
			min_in_a = d->stack_a[d->top_a];
		f_ra(d);
	}
	while (d->top_b >= 0)
		f_pa(d);
	ft_putchar('\n');
}
