/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <kfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:17:32 by kfrancis          #+#    #+#             */
/*   Updated: 2020/01/22 17:13:30 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
	|| str[i] == '\f' || str[i] == '\r') && str[i] != '\0')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = ((res * 10) + str[i] - '0');
		i++;
	}
	return (res * sign);
}
