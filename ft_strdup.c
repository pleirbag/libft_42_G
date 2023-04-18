/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabpicci <gabpicci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 22:33:16 by gabpicci          #+#    #+#             */
/*   Updated: 2023/04/18 19:18:09 by gabpicci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dupe;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (s[size])
		size++;
	dupe = malloc(sizeof(char) * size);
	if (dupe)
	{
		while (s)
		{
			dupe[i] = s[i];
			i++;
		}
		return (dupe);
	}
	return (0);
}
