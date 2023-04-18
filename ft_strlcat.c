/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabpicci <gabpicci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:59:47 by gabpicci          #+#    #+#             */
/*   Updated: 2023/04/18 18:33:02 by gabpicci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	c;
	unsigned int	d;

	i = 0;
	a = 0;
	d = 0;
	c = 0;
	while (dest[i] != '\0')
		i++;
	while (src[c] != '\0')
		c++;
	d = i + c;
	if (size <= i || size == 0)
		return (c + size);
	while (a < size - i - 1 && src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (d);
}
