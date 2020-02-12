/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <kfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:30:50 by kfrancis          #+#    #+#             */
/*   Updated: 2020/02/06 16:23:37 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	else
		while (str[i] != '\0')
		{
			str[i] = '\0';
			i++;
		}
	str[i] = '\0';
	return (str);
}
