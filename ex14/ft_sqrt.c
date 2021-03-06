/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:03:24 by areid             #+#    #+#             */
/*   Updated: 2017/11/06 17:00:02 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int x;
	int temp;

	if (nb == 1)
		return (1);
	if (nb < 1)
		return (0);
	x = 2;
	while (x <= (nb / 2))
	{
		temp = x * x;
		if (temp == nb)
			return (x);
		x++;
	}
	return (0);
}
