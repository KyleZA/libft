/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:39:05 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/14 18:51:53 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i;
	int j;
	int k;
	char *chrdst;
	char *chrsrc;

	if (dst == NULL && src == NULL)
		return (NULL);
	chrdst = (char *)dst;
	chrsrc = (char *)src;
	i = len;
	j = 0;
	k = 0;

	if (dst > src)
		while (i-- > 0)
		chrdst[i] = chrsrc[i];
	else
		while (len > 0)
	{
		chrdst[j] = chrsrc[k];
		j++;
		k++;
		len--;
	}
	return (dst);
}
