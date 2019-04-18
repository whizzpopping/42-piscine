/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 20:56:35 by brlee             #+#    #+#             */
/*   Updated: 2019/04/02 12:42:35 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *str, char *to_find)
{
	int i;

	i = 0;
	while (to_find[i] != '\0')
	{
		str[i] = to_find[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}