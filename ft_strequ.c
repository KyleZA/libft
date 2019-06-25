/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 09:01:58 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/25 16:45:11 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	if (!s1)
		return (0);
	if (ft_strlen(s1) == ft_strlen(s2))
		return (1);
	else
		return (0);

}
