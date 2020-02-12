/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <kfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 20:23:49 by kfrancis          #+#    #+#             */
/*   Updated: 2020/02/10 15:08:09 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;

	if (!(s = (char *)malloc((sizeof(char)) + 2)))
		return (NULL);
	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	if (n < 0)
	{
		s[0] = '-';
		s[1] = '\0';
		s = ft_strjoin(s, ft_itoa(-n));
	}
	else if (n >= 10)
	{
		s = ft_strjoin(ft_itoa(n / 10), (ft_itoa(n % 10)));
	}
	else
	{
		s[0] = n + '0';
		s[1] = '\0';
	}
	return (s);
}
