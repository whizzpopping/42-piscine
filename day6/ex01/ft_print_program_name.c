/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:57:58 by brlee             #+#    #+#             */
/*   Updated: 2019/04/03 18:26:44 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

int		schar(char i)
{
	if (i == ' ' || i == '\n' || i == '\t' || i == '\f' || i == '\r' || i == '\v' || i == '\a')
		return (1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int i; 

	i = 0;
	if (argc == 1)
	{
		while (argv[0][i] != '\0')
		{	
			if (schar(argv[0][i]))
				break;
			ft_putchar(argv[0][i]);
			i++;
		}
		ft_putchar('\n');
	}
	else
		return (0);
}
