/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:42:08 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/09 09:44:53 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}

#include "libft.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

int	main(int argc, char **argv)
{
	if (argc < 3)
		return (-1);
	char *dest1 = " ";
	char *dest2 = " ";
	printf("OG is %zu\n", strlcpy(dest1, argv[1], atoi(argv[2])));
	printf("mine is %zu\n", ft_strlcpy(dest2, argv[1], atoi(argv[2])));
	printf("OG gives %s\nMine gives %s\n", dest1, dest2);
	return (0);
}
