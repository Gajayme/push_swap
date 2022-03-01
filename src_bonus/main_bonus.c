/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:47:57 by gajayme           #+#    #+#             */
/*   Updated: 2022/02/25 20:30:05 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc_bonus/push_swap_bonus.h"

int	main(int ac, char **av)
{
	t_data	data;

	if (ac == 1)
		return (0);
	reader(&data, ac, av);
	fill_a(&data);
	return (0);
}
