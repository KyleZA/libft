/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:19:39 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/07 10:44:52 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	unsigned char chr;

	chr = (unsigned char)c;
	i = ft_strlen(s);

	while ((i > 0) && (s[i] != chr))
	{
		i--;
	}
	if (s[i] == chr)
		return ((char *)s + i);
	return (NULL);
}
