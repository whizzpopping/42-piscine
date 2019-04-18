/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:40:24 by brlee             #+#    #+#             */
/*   Updated: 2019/04/02 18:16:01 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *haystack, char *needle)
{
	int nl;
	int hayl;
	int holder;

	nl = 0;
	hayl = 0;
	if (needle[nl] == '\0')
	{
		return (&haystack[hayl]);
	}
	while (haystack[hayl] != '\0')
	{
		while (haystack[hayl + nl] == needle[nl])
		{
			if (needle[nl + 1] == '\0')
			{
				return (&haystack[hayl]);
			}
			holder = nl;
			nl++;
		}
		hayl++;
	}
	return (0);
}
