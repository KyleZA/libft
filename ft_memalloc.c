/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 10:59:17 by kfrancis          #+#    #+#             */
/*   Updated: 2019/07/04 09:23:24 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *memry;

	memry = (void *)malloc(sizeof(void) * size);
	while (memry)
	{
		ft_bzero(memry, size);
		return (memry);
	}
	return (NULL);
}
