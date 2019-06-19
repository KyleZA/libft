/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 16:28:11 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/19 16:45:40 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{

	char *str;

	char *mem;

	str = ft_strlen(s1);

	mem = ft_strnew(str);

	if ((s1 == str) && (s2 == str) && (str =< mem))
		return (str);
	return (NULL);

}	
