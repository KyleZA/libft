/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:54:18 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/26 16:41:51 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	chr;
	int				i;

	chr = (unsigned char)c;
	i = 0;
	while (*s && *s != c)
		s++;
	if (*s == chr)
		return ((char*)s + i);
	return (NULL);
}
