/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:28:44 by areid             #+#    #+#             */
/*   Updated: 2017/11/06 15:28:49 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char c;

	if (n < 0)
	{
		c = 'N';
		ft_putchar(c);
	}
	else
	{
		c = 'P';
		ft_putchar(c);
	}
}