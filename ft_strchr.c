/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:54:18 by kfrancis          #+#    #+#             */
/*   Updated: 2019/05/28 16:15:02 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	unsigned char charr;

	charr = c;

	while (s)
		if(*s == charr)
		{
			return ((char*)s);
			s++;
		}
	return ('\0');
}
