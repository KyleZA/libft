/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:58:18 by kfrancis          #+#    #+#             */
/*   Updated: 2019/05/28 13:21:52 by kfrancis         ###   ########.fr       */
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
}
int main()
{
	printf("%d\n", ft_atoi("22b3" "123" "123123"));
	printf("%d", atoi("12b3"));
	return(0);
}
