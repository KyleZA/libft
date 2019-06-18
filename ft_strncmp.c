/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 11:42:06 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/18 12:21:49 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;

	i = 0;
	while ((str1[i] && str2[i]) && (str1[i] == str2[i] && (i < n)))
	{
		i++;
		n--;
	}
	if ((str1[i] > str2[i]) && (i > n))
		return (1);
	else if (str1[i] < str2[i] && (i > n))
		return (-1);
	return (0);
			
}
