/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:39:05 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/14 09:16:31 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	
	size_t i;
	char *chrdst;
	char *chrsrc;

	if (dst == NULL && src == NULL)
		return (NULL);

	chrdst = (char *)dst;
	chrsrc = (char *)src;
	i = len;
	
	if (dst > src)
		while (i > 0)
		{
			chrdst[i] = chrsrc[i];
			i--;
		}
	else
		while (len > 0)
		{
			chrdst[i] = chrsrc[i];
			i++;
			len--;
		}
	return (dst);
}
