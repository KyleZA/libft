/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:39:19 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/10 12:41:33 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	ft_strdel(char **as)
{
	if (as != NULL)
	{
		free(*as);
		*as = NULL;
	}

}
