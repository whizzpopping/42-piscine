/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:53:28 by brlee             #+#    #+#             */
/*   Updated: 2019/04/02 15:26:43 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int digit;
	int t;

	digit = 0;
	t = 0;
	while (str[t] == '\n' || str[t] == '\t' || str[t] == '\v' ||
			str[t] == ' ' || str[t] == '\f' || str[t] == '\r')
		t++;
	while (str[t] == '+' || str[t] == '-')
		t++;
	while (str[t] != '\0' && str[t] >= '0' && str[t] <= '9')
	{
		digit *= 10;
		digit += str[t] - 48;
		t++;
	}
	if (str[0] == '-')
	{
		return (-digit);
	}
	return (digit);
}
