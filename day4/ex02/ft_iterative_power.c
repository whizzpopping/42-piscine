/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 14:53:40 by brlee             #+#    #+#             */
/*   Updated: 2019/04/14 14:04:33 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	while (power >= 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
