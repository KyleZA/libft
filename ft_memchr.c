/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:48:33 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/05 14:01:09 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
	char *temp;

	temp = (char *)s;

	while((n > 0) && (temp[c] != '\0'))
	{
		c++;
		n--;
	}
	if (s == NULL)
	{
		return (NULL);
	}
	return (temp);
}
