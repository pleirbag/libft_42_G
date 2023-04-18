/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabpicci <gabpicci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:28:54 by gabpicci          #+#    #+#             */
/*   Updated: 2023/04/18 18:32:23 by gabpicci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, int n)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (s && i < n)
	{
		if (c == *s)
		{
			return ((void *)str + i);
		}
		s++;
		i++;
	}
	return (NULL);
}


// int main () {
//    const char str[] = "teste.teste";
//    const char ch = '.';
//    char *ret;

//    ret = ft_memchr(str, ch, strlen(str));

//    printf("String after |%c| is - |%s|\n", ch, ret);

//    return(0);
// }