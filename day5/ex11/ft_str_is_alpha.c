/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 20:49:33 by brlee             #+#    #+#             */
/*   Updated: 2019/04/16 21:37:08 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char i)
{
	if (i <= 122 && i >= 97)
		return (1);
	else if (i >= 65 && i <= 90)
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
