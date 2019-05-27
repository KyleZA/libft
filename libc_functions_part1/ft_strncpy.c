/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:29:00 by kfrancis          #+#    #+#             */
/*   Updated: 2019/05/24 10:00:01 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	while(src != '\0')
		{
			dst[i] = src[i];
				len++;
		}
	if(src[i] > '\0')
		{
			dst[i] = '\0'
		}
	return(*dst);
}