/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:32:32 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/12 15:39:11 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	int i;

	i = 0;

	unsigned char *chrdst;
	unsigned char *chrsrc;

	chrdst = (unsigned char *)dst;
	chrsrc = (unsigned char *)src;

	while (n > 0)
	{
		chrdst[i] = chrsrc[i];
		if (chrsrc[i] == (unsigned char)c)
			return (++chrdst);
	i++;
	n--;
	}
	return (NULL);
}
