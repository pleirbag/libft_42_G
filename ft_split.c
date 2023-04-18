/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabpicci <gabpicci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 23:00:12 by gabpicci          #+#    #+#             */
/*   Updated: 2023/04/18 19:40:50 by gabpicci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_str(char const *s, char c)
{
	int	sz;
	int	i;

	sz = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			i++;
		if (s[i] == c)
		{
			sz++;
			i++;
		}
	}
	return (sz);
}

char	*str_mkr(char const *s, char c, int i)
{
	int		b;
	char	*str;

	b = i;
	while (s[b] != c && s[b])
		b++;
	str = malloc(sizeof(char) * b + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	b = i - 1;
	while (s[++b] && s[b] != c)
		str[b - i] = s[b];
	str[b] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		ii;
	char	**matrix;

	i = 0;
	ii = 0;
	matrix = (char **)malloc((nbr_str(s, c) + 1) * sizeof(char *));
	if (matrix == NULL)
	{
		return (NULL);
	}
	while (s[i])
	{
		if (s[i] != c)
		{
			matrix[ii++] = str_mkr(s, c, i);
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	matrix[ii] = NULL;
	return (matrix);
}

// int	main(int ac, char **av)
// {
// 	if (ac >= 3)
// 	{
// 		ft_split(av[1], av[2][0]);
// 	}
// }
