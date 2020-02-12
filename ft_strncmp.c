/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <kfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 07:46:09 by kfrancis          #+#    #+#             */
/*   Updated: 2020/02/10 14:40:12 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1 != '\0' && str2 != '\0')
			&& (str1[i] == str2[i]) && (i < n - 1))
	{
		i++;
		if ((str1[i] == '\0' && str2[i] == '\0') && (str1[i] == str2[i]))
			return (str1[i] - str2[i]);
	}
	return (str1[i] - str2[i]);
}
