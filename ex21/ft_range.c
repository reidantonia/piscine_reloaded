/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:17:57 by areid             #+#    #+#             */
/*   Updated: 2017/08/15 15:51:26 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		range;
	int		*tab;
	int		counter;

	if (min >= max)
		return (0);
	counter = min;
	range = 0;
	while (counter < max)
	{
		counter++;
		range++;
	}
	tab = (int*)malloc(sizeof(*tab) * (range));
	tab[0] = min;
	counter = 1;
	while (counter < range)
	{
		tab[counter] = tab[counter - 1] + 1;
		counter++;
	}
	tab[counter] = '\0';
	return (tab);
}
