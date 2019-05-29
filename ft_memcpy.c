/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:47:51 by kfrancis          #+#    #+#             */
/*   Updated: 2019/05/28 16:55:36 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memcpy(void *restrict dst, const void *restrict src,size_t n)
{
	size_t i;
	int j;

	i = 0;
	j = 0;

	while(src[i])
	{
		if(src[j] != '\0')
			i++;
	}
	while(src[i] && dst[j])
	{
		if(src[i] != '\0' && dst[j] != '\0')
			*dst = *src;
			j++;
			i++;
	}
}
