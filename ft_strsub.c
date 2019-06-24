/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 11:42:35 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/24 12:29:14 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *newstr;
	size_t i;
	
	i = 0;
	if (s == NULL)
		return (NULL);
	newstr = (char *)malloc(sizeof(char) * len + 1);
	if (newstr == NULL)
	   return (NULL);
	while (i < len)
	{
		newstr[i] = s[i + start];
		i++;
	}
	newstr[i]= '\0';
	return (newstr);
}
