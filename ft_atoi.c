/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:58:18 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/28 17:00:12 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	unsigned ret;
	int len;
	int i;
	int j;
	int sign;

	sign = 1;
	ret = 0;
	len = 0;
	i = 0;
	j = -1;
	while (ft_isspace(*str))
		str++;
	len = (ft_strlen(str));
	while (++j < len)
	{
		if (ft_isdigit(str[j]))
			ret = (ret * 10) + (str[j] - '0');
		else if (j == 0 && str[j]== '-')
			sign = -1;
		else if (str[j] == '+')
			sign = 1;
	}
	return (ret * sign);
}
