/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <kfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:57:41 by kfrancis          #+#    #+#             */
/*   Updated: 2020/02/12 12:28:34 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *str, char c)
{
	int		i;
	int		j;
	int		k;
	char	**ret;

	i = 0;
	k = 0;
	if ((!str) || (!(ret = (char **)malloc(sizeof(char *) * (2048)))))
		return (NULL);
	while (str[i] == c)
		i++;
	while (str[i])
	{
		j = 0;
		if (!(ret[k] = (char *)malloc(sizeof(char) * (4096))))
			return (NULL);
		while (str[i] && str[i] != c)
			ret[k][j++] = str[i++];
		while (str[i] && str[i] == c)
			i++;
		ret[k][j] = '\0';
		k++;
	}
	ret[k] = NULL;
	return (ret);
}
