/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabpicci <gabpicci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:39:49 by gabpicci          #+#    #+#             */
/*   Updated: 2023/04/18 19:09:15 by gabpicci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*t;
	char		*d;
	char		*s;
	size_t		i;

	d = (char *)dest;
	s = (char *)src;
	t = NULL;
	i = 0;
	while (i < n)
	{
		t[i] = s[i];
		i++;
	}
	while (i >= 0)
	{
		d[i] = t[i];
		i--;
	}
	return (dest);
}
