/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:49:50 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/15 13:43:55 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (str == NULL && to_find == NULL)
		return (NULL);
	while (i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && i + j < len)
			j++;
		if (to_find[j] == 0)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
/* 
int	main(int argc, char **argv)
{
	if (argc == 4)d
	{
		printf("mi is %s\n", ft_strnstr(argv[1], argv[2], (size_t)atoi(argv[3])));
		printf("OG is %s\n", strnstr(argv[1], argv[2], (size_t)atoi(argv[3])));
	}
}
 */