/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:52:25 by brlee             #+#    #+#             */
/*   Updated: 2019/04/03 22:34:12 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

int		ft_print_params(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (argc > 1)
	{
		ft_print_params(argv[i]);
		argc--;
		i++;
	}
	return (0);
}