/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 06:58:28 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/11 09:40:36 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t i;

	i = 0;

	if (dstsize < i)
		while ( dst[dstsize] != '\0' && src[i] != '\0')
	{
		dst[dstsize] = src[i];
		i++;
		dstsize++;
	}
	if (dst[dstsize] == src[i])
	{
		return(*dst - 1);
	}
	if (dstsize == 0)
	{
		*dst = '\0';
	}
	if (i > dstsize)
	{
		return (0);
	}
	return (*dst);
}
