/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabpicci <gabpicci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 19:18:31 by gabpicci          #+#    #+#             */
/*   Updated: 2023/04/18 20:41:17 by gabpicci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int	ft_toupper(int ch);

int	ft_atoi(const char *str);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nitems, size_t size);

int	ft_isascii(int c);

int	ft_isprint(int arg);

void	*ft_memchr(const void *str, int c, int n);

int	ft_memcmp(const void *str1, const void *str2, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memset(void *str, int c, size_t n);

char	**ft_split(char const *s, char c);

char	*ft_strchr(const char *str, int c);

char	*ft_strdup(const char *s);

char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlcat(char *dest, const char *src, size_t size);

size_t	*ft_strlcpy(char *dst, const char *src, size_t size);

int	ft_strlen(const char *str);

int	ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *str, const char *find, size_t len);

char	*ft_strrchr(const char *str, int c);

int	ft_tolower(int ch);

int	ft_toupper(int ch);

#endif