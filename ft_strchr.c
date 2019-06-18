/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:54:18 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/18 09:54:29 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	unsigned char charr;
	int i;

	charr = (unsigned char)c;
	i = 0;
	while (*s && *s != c)
		s++;
	if(*s == charr)
		return ((char*)s + i);			
	return (NULL);
}
