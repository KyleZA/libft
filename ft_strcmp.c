/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:56:19 by kfrancis          #+#    #+#             */
/*   Updated: 2019/06/18 11:22:04 by kfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(const char *s1, const char *s2)
{
	int i;
	i = 0;

	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;

	if (str1[i] && str2[i])
		while((str1[i] != '\0' && str2[i] != '\0') && (str1[i] == str2[i]))
		{
			i++;
		}
	if (str1[i] > str2[i])
		return (1);
	else if (str1[i] < str2[i])
		return (-1);
	return(0);
}
