/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:04:44 by gajayme           #+#    #+#             */
/*   Updated: 2022/02/25 22:56:53 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int symbol)
{
	size_t	i;

	i = 1;
	while (*string)
	{
		string ++;
		i ++;
	}
	while (i != 0 && *string != (char)symbol)
	{
		string --;
		i --;
	}
	if (i != 0)
		return ((char *)string);
	return (NULL);
}
