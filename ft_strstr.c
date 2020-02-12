/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 09:02:42 by kfrancis          #+#    #+#             */
/*   Updated: 2020/02/10 15:13:25 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (needle[j] == '\0')
		return ((char *)&haystack[i]);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
