/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:16:45 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/06 11:24:46 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{	
	
	int i;

	i = 0;

	char *chrs1;
	char *chrs2;
	
	chrs1 = (char *)s1;
	chrs2 = (char *)s2;

	if (chrs1[i] == chrs2[i])
	{
		return (0);
	}
	while  ((n > 0) && (chrs1[n] < chrs2[n]))
	{
		i++;
		n--;
		return (chrs2 - chrs1);
	}
	while ((n > 0) && (chrs2[i] < chrs2[i]))
	{
		i++;
		n--;
		return (chrs1 - chrs2);
	}
	return (0);
}
