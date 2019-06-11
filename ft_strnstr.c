/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:05:29 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/11 13:19:27 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int j;

	j = 0;
	if (haystack[len] == '\0' && needle[j] != '\0')
	{
		return (NULL);
	}
	while ((haystack[len] != '\0') && (needle[j] < haystack[len]))
	{
		j++;
	}
	if (haystack[len] >= '\0')
		while (haystack[len] == '\0')
		{
			return (NULL);
		}
	return (0);
}	
