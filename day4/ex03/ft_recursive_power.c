/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 15:52:35 by brlee             #+#    #+#             */
/*   Updated: 2019/04/14 14:11:56 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int nbr;

	if (power < 0 || power > 12)
		return (0);
	else if (power == 0)
		return (1);
	else
		nbr = (nb) * ft_recursive_power(nb, power - 1);
	return (nbr);
}
