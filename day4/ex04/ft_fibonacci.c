/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 22:16:45 by brlee             #+#    #+#             */
/*   Updated: 2019/03/30 23:22:21 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 1)
		return (index);
	else if (index == 0)
		return (index);
	else if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
