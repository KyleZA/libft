/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <kfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:44:42 by kfrancis          #+#    #+#             */
/*   Updated: 2020/02/10 14:21:29 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			j;
	size_t			i;
	unsigned int	sl;
	unsigned int	dl;

	j = 0;
	i = ft_strlen(dst);
	sl = ft_strlen(src);
	dl = ft_strlen(dst);
	if (dstsize < dl + 1)
		return (sl + dstsize);
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (sl + dl);
}
