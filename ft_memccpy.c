/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:32:32 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/14 17:02:20 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;

	unsigned char *chrdst;
	unsigned char *chrsrc;

	chrdst = (unsigned char *)dst;
	chrsrc = (unsigned char *)src;

	while (n > 0)
	{
		chrdst[i] = chrsrc[i];
		if (chrsrc[i] == (unsigned char)c)
			return (chrdst + i + 1);
	i++;
	n--;
	}
	return (NULL);
}
