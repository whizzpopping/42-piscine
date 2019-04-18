/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 23:19:22 by brlee             #+#    #+#             */
/*   Updated: 2019/04/14 12:27:13 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	s[50];

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	while (i > 0)
	{
		str[j] = s[i - 1];
		i--;
		j++;
	}
	str[j] = '\0';
	return (str);
}