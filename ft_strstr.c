/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:41:25 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/24 10:41:38 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;

	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != needle[i])
	{
		i++;
	}
	if (haystack[i] == needle[j + 1])
	{
		while (haystack[i] != '\0' && needle[j] != '\0')
		return ((char *)&haystack[i]);
			i++;
			j++;
	}
	return (0);
}
