/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   messages.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <vklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 17:20:46 by vklepper          #+#    #+#             */
/*   Updated: 2016/03/15 17:22:08 by vklepper         ###   ########.fr       */
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
