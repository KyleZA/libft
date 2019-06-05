/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:32:32 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/05 13:38:21 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	char *chrdst;
	char *chrsrc;

	chrdst = (char *)dst;
	chrsrc = (char *)src;

	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	while ((n > 0) && chrsrc[c] != '\0')
	{
		chrdst[c] = chrsrc[c];
		c++;
		n--;
	}
	return (dst);
}
