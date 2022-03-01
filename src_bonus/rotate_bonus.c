/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:46:57 by gajayme           #+#    #+#             */
/*   Updated: 2022/02/25 22:42:01 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc_bonus/push_swap_bonus.h"

void	rotate_a(t_stack **stack_a)
{
	t_stack	*tmp;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	tmp = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	tmp->next = NULL;
	up_lstadd_back(stack_a, tmp);
}

void	rotate_b(t_stack **stack_b)
{
	t_stack	*tmp;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	tmp = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	tmp->next = NULL;
	up_lstadd_back(stack_b, tmp);
}

void	rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if ((*stack_a) && (*stack_a)->next)
	{
		tmp = (*stack_a);
		(*stack_a) = (*stack_a)->next;
		tmp->next = NULL;
		up_lstadd_back(stack_a, tmp);
	}
	if ((*stack_b) && (*stack_b)->next)
	{
		tmp = (*stack_b);
		(*stack_b) = (*stack_b)->next;
		tmp->next = NULL;
		up_lstadd_back(stack_b, tmp);
	}
}
