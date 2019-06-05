/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:29:00 by kfrancis          #+#    #+#             */
/*   Updated: 2019/05/31 06:59:40 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;

	while (src != '\0')
		{
			dst[len] = src[i];
			i++;
		}
	if (i > len)
		{
			dst[len] = '\0';
			len++;
		}
	return(dst);
}
