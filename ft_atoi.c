/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:58:18 by kfrancis          #+#    #+#             */
/*   Updated: 2019/05/31 06:58:53 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
	int i;
	
 	i = 0;
	
	while(str[i] != '\0')
	{
			if(str[i] >= '0' && str[i] <= '9')
			{	
				i++;
				return(*str);
			}
	}
	return (0);
}
