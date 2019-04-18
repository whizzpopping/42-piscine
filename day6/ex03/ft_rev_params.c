/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:25:48 by brlee             #+#    #+#             */
/*   Updated: 2019/04/03 18:32:59 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_putchar(char c);

int		ft_rev_params(char *str)
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
	while (argc > 1)
	{
		ft_rev_params(argv[argc - 1]);
		argc--;
	}
	return (0);
}