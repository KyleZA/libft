/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:58:18 by kfrancis          #+#    #+#             */
/*   Updated: 2019/07/02 12:57:33 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int i;
	int sign;
	int val;

	i = 0;
	if (*str == '\0')
		return (0);
	while (ft_isspace(str[i]))
		i++;
	sign = 1;	
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	val = 0;
	while (ft_isdigit(str[i]))
	{
		val = (val * 10) + (str[i] - '0');
		i++;
	}
	return (sign  * val);
}
