/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <kfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 07:46:22 by kfrancis          #+#    #+#             */
/*   Updated: 2020/02/12 12:13:12 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while ((needle[j] != '\0') &&
					((i + j) < len) && (haystack[i + j] == needle[j]))
				++j;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		++i;
	}
	return (0);
}
