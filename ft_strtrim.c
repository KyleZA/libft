/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 13:57:43 by kfrancis          #+#    #+#             */
/*   Updated: 2019/07/04 13:37:22 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*final;
	char		*cursor;
	const char	*test;
	int			i;

	i = 0;
	test = s;
	if (!s)
		return (NULL);
	while (ft_isspace(*test))
		test++;
	i = strlen(test);
	if (!i)
		return (ft_strnew(0));
	while (ft_isspace(test[i - 1]))
		i--;
	if (!(final = ft_strnew(i)))
		return (NULL);
	cursor = final;
	while (i--)
		*cursor++ = *test++;
	return (final);
}
