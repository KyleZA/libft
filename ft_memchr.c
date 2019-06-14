/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:48:33 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/15 01:59:08 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	
	i = 0;	
	unsigned char *str;
	str = (unsigned char *)s;
		while (i < n)
		{	
			if (str[i] == (unsigned char)c)
			{
				return (&str[i]);
			}
			i++;
		}
		return (NULL);
}
