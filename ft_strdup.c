/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:02:28 by kfrancis          #+#    #+#             */
/*   Updated: 2019/05/27 15:06:43 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char * ft_strdup(const char *src)
{
	int i;

	i = 0;

		dst = (char*)malloc(ft_strlen(src)*sizeof((char) + 1);
			if(dst == NULL)
			{
			return (NULL);
			}
		while(src[i] != '\0')
		{
			dst[i] = src[i];
			i++
		}
	dst[i] = '\0'
	return (dst);
}
