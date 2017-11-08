/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 13:16:51 by areid             #+#    #+#             */
/*   Updated: 2017/08/14 22:47:44 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int b;

	i = 1;
	b = 0;
	while (i < argc)
	{
		while (argv[i][b] != '\0')
		{
			ft_putchar(argv[i][b]);
			b++;
		}
		ft_putchar(10);
		b = 0;
		i++;
	}
	return (0);
}
