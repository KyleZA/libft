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
	size_t j;

	i = 0;
	j = 0;

	while (dst[j] && j < dstsize)
		j++;
	i = j;
	while (src[j - i] && j + 1 < dstsize)
	{
		dst[j] = src[j - i];
		j++;
	}
	if (i < dstsize)
	dst[j] = '\0';
	return (i + ft_strlen(src));
}