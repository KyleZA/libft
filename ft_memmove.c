/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <kfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:35:00 by kfrancis          #+#    #+#             */
/*   Updated: 2020/02/10 14:28:51 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (dst > src)
		while (len--)
		{
			d[len] = s[len];
		}
	else
		while (len--)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}
