/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:24:56 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/06 14:44:37 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t len;
	size_t len2;

	len = ft_strlen(s1);
	len2 = 0;
	while (n && s2[len2] != '\0')
	{
		s1[len + len2] = s2[len2];
		len2++;
		n--;
	}
	s1[len + len2] = '\0';
	return (s1);
}
