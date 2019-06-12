/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:34:39 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/12 09:58:14 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{	
	unsigned char *temp;

	temp = b;

	while (len > 0)
	{
		*temp = c;
		len--;
		temp++;
	}
	return (b);
}

