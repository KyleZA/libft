/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:29:00 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/14 14:03:35 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;

	if (len <= 0)
		return (NULL);
	if (i  ==  len)
	{
		dst[i] = src[i];
	}	
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
		if (len == '\0')
			while (i < len)
			{
				dst[i] = '\0';
				i++;
			}
	return(dst);
}
