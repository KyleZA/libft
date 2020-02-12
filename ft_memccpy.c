/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <kfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 12:38:18 by kfrancis          #+#    #+#             */
/*   Updated: 2020/02/10 13:38:31 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
		{
			return (dst + 1 + i);
		}
		i++;
	}
	return (NULL);
}
