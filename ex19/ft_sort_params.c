/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 21:14:38 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 08:50:43 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int argc, char **argv);

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while ((s1[x] && s2[x]) != '\0' && (s1[x] == s2[x]))
		x++;
	return (s1[x] - s2[x]);
}

void	ft_print_params(int argc, char **argv)
{
	int a;
	int b;

	a = 1;
	b = 0;
	while (a < argc)
	{
		while (argv[a][b])
		{
			ft_putchar(argv[a][b]);
			b++;
		}
		ft_putchar(10);
		b = 0;
		a++;
	}
}

void	ft_sort_params(int argc, char **argv)
{
	int		a;
	int		b;
	char	*temp;

	a = 1;
	b = 0;
	while (a < (argc - 1))
	{
		if (ft_strcmp(argv[a], argv[a + 1]) > 0)
		{
			temp = argv[a];
			argv[a] = argv[a + 1];
			argv[a + 1] = temp;
			a = -1;
		}
		a++;
	}
	ft_print_params(argc, argv);
}

int		main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	return (0);
}
