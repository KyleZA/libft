/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:41:25 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/11 13:03:46 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;

	if (haystack[i] > 0)
	while (haystack[i] != '\0')
	{
		i++;
	}
	while (needle[j] != '\0' && haystack[i] != '\0')
	{
			i++;
			j--;
	}
	if (!haystack[i] && !needle[j])
	{
		return (NULL);
	}
	return (0);
}
