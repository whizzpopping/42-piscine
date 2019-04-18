/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:42:36 by brlee             #+#    #+#             */
/*   Updated: 2019/04/03 18:17:40 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ftputstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
	{
		ft_putchar(str[i]);
		i++; 
	}
	ft_putchar('\n');
}

int	str_cmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return(s1[i] - s2[i]);
}

int main(int argc, char *argv[])
{
	int i;
	char *temp;

	i = 1;
	if (argc == 2)
	{
		ftputstr(argv[1]);
		return (0);
	}
	else if (argc > 1)
	{
		if (str_cmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = temp;
			i = 1;
		}
		else 
			i++;
		}
		i = 1;
		while (i < argc)
		{
			ftputstr(argv[i]);
			i++;
		}
	}
	return (0);
}