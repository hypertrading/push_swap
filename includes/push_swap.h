/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <vklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 00:20:19 by vklepper          #+#    #+#             */
/*   Updated: 2016/03/20 19:11:11 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/srcs/libft.h"

typedef struct	s_data
{
	int			*stack_a;
	int			*stack_b;
	int			top_a;
	int			top_b;
	int			space;
	int			nbr_mv;

}				t_data;

void			push_swap(char **argv);
void			parsing(char **argv, t_data *data);
void			parsing_flag(char **argv, t_data *data);
int				arguments_checker(char **argv);
int				opti_solve(t_data *d);
void			brute_solve(t_data *d);
void			print_etat(t_data *data);
void			ft_error(int i);
void			pb_smallest(t_data *d, int pos, int min);
int				one_swap(t_data *d);
int				solve_three(t_data *d);
void			f_sa(t_data *d);
void			f_sb(t_data *d);
void			f_ss(t_data *d);
void			f_pb(t_data *d);
void			f_pa(t_data *d);
void			f_ra(t_data *d);
void			f_rb(t_data *d);
void			f_rr(t_data *d);
void			f_rra(t_data *d);
void			f_rrb(t_data *d);
void			f_rrr(t_data *d);

#endif
