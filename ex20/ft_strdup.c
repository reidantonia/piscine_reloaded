/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 08:44:10 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 08:44:45 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int		length;
	char	*p;
	int		i;

	length = 0;
	i = 0;
	while (src[length] != '\0')
		length++;
	p = (char*)malloc(sizeof(char) * (length + 1));
	if (!p)
		return (0);
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
