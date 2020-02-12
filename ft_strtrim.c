/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 07:48:09 by kfrancis          #+#    #+#             */
/*   Updated: 2020/02/10 15:48:01 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		len;
	int		i;
	char	*str;

	i = 0;
	len = 0;
	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	if (*s == '\0')
		return ("\0");
	while (s[len] != '\0')
		len++;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t' || !s[len])
		len--;
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (str && i <= len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
