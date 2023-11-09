/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:12:29 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/08 14:58:49 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	<ctype.h>
#include	<string.h>

size_t		ft_strlcpy(char *dest, char *src, size_t size);
size_t		ft_strlcat(char *dest, char *src, size_t size);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *str);

int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(char *str, char *to_find, size_t len);

#endif
