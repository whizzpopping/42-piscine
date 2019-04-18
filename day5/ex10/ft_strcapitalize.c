/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:45:18 by brlee             #+#    #+#             */
/*   Updated: 2019/04/15 23:14:36 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lower(char i)
{
	if (i <= 122 && i >= 97)
		return (1);
	else
		return (0);
}

int		is_cap(char i)
{
	if (i <= 90 && i >= 65)
		return (1);
	else
		return (0);
}

int		schar(char i)
{
	if ((i >= 33 && i <= 47) || i == ' ')
		return (1);
	else if (i <= 64 && i >= 58)
		return (1);
	else if (i <= 96 && i >= 91)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (schar(str[i]))
		i++;
	if (is_lower(str[i]))
	{
		str[i] -= 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (schar(str[i - 1]) && is_lower(str[i]))
			str[i] -= 32;
		else if (!schar(str[i - 1]) && is_cap(str[i]))
			str[i] += 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}
