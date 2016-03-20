/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   messages.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <vklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 17:20:46 by vklepper          #+#    #+#             */
/*   Updated: 2016/03/20 19:12:21 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(int i)
{
	if (i == 0)
		ft_putstr("Error\n");
	if (i == 1)
		ft_putstr("Error malloc");
}

void	print_etat(t_data *d)
{
	int i;

	i = d->top_a;
	ft_putstr("--------------\n");
	ft_putstr("Stack a :");
	while (i >= 0)
	{
		ft_putnbr(d->stack_a[i]);
		ft_putchar(' ');
		i--;
	}
	ft_putstr("\n");
	i = 0;
	ft_putstr("Nombre de coup :");
	ft_putnbr(d->nbr_mv);
	ft_putstr("\n--------------\n");
}
