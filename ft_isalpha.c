/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:43:12 by kfrancis          #+#    #+#             */
/*   Updated: 2019/05/24 10:19:26 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}