/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:18:07 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/14 12:21:57 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if(src[i] == '\0')
	{
		dst[i] = src[i];
	}
	if (src == NULL && dst == NULL)
	{
		return (NULL);
	}
	return (dst);
}
