/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:16:45 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/15 02:16:40 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{	

	unsigned char *chrs1;
	unsigned char *chrs2;
	
	chrs1 = (unsigned char *)s1;
	chrs2 = (unsigned char *)s2;

	while (n > 0)
	{
		if (*chrs1 != *chrs2)
			return (*chrs1 - *chrs2);
		n--;
		chrs1++;
		chrs2++;
	}
	return (0);
}
