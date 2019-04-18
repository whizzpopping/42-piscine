/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 11:36:09 by brlee             #+#    #+#             */
/*   Updated: 2019/03/30 23:42:02 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int product;

	product = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		product = product * nb;
		nb--;
	}
	return (product);
}
