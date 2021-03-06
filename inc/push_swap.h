/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatstra <mbatstra@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:14:33 by mbatstra          #+#    #+#             */
/*   Updated: 2022/05/23 19:35:23 by mbatstra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

typedef struct	s_value
{
	int	val;
	int	i_old;
	int	i_new;
}				t_value;

void	msort(t_list **lst, char mode);
void	validate_input(int argc, char **argv);
void	parse(t_list **list, int argc, char **argv);
void	new_index(t_list **lst);
void	swap(t_list **lst, char mode);
void	swap_s(t_list **stack_a, t_list **stack_b);
void	rot(t_list **stack, char mode);
void	rot_r(t_list **stack_a, t_list **stack_b);
void	rev_rot(t_list **stack, char mode);
void	rev_rot_r(t_list **stack_a, t_list **stack_b);
void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);

#endif
