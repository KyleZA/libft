/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:39:05 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/05 13:47:35 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i;

	i = 0;

	unsigned char *chrdst;
	unsigned char *chrsrc;

	chrdst = (unsigned char *)dst;
	chrsrc = (unsigned char *)src;

	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	while ((len > 0) && chrsrc[i] != '\0')
	{
		i++;
		len--;
	}
	while (len > 0)
	{
		chrdst[i] = chrsrc[i];
		i++;
		len--;
	}
	return (dst);
}
