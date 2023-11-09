/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:42:08 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/09 13:46:01 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i] && i < size)
		i++;
	return (i);
}

int	main(void)
{
/* 	if (argc < 3)
		return (-1); */
	char dest1[20] = "    ";
	char dest2[20] = "    ";
	printf("OG is %zu\n", strlcpy(dest1, "abeilles", 4));
	printf("mine is %zu\n", ft_strlcpy(dest2, "abeilles", 4));
	printf("OG gives %s\nMine gives %s\n", dest1, dest2);
	return (0);
}
