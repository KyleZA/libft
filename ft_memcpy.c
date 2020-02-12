/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <kfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 07:29:38 by kfrancis          #+#    #+#             */
/*   Updated: 2020/02/06 16:23:40 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *s;
	char *d;

	s = (char *)src;
	d = (char *)dst;
	if (!dst && !src)
		return (dst);
	while (n > 0)
	{
		*d = *s;
		s++;
		d++;
		n--;
	}
	return (dst);
}
