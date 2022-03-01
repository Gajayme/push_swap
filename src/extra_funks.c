/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_funks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:28:47 by gajayme           #+#    #+#             */
/*   Updated: 2022/02/25 23:28:48 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/push_swap.h"

//from rotate_opt
int	rrb_ra_opt(t_stack *tmp)
{
	int	cost;

	cost = tmp->score_rb + tmp->score_a;
	return (cost);
}

//from move
void	rrb_ra_move(t_stack *stack, t_data *data)
{
	while (stack->score_rb)
	{
		rev_rotate_b(&data->stack_b);
		stack->score_rb -= 1;
	}
	while (stack->score_a)
	{
		rotate_a(&data->stack_a);
		stack->score_a -= 1;
	}
	push_a(&data->stack_a, &data->stack_b, &data->len_a, &data->len_b);
}
