/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:49:50 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/09 10:56:11 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
		{
			j++;
		}
		if (to_find[j] == 0)
			return (str + i);
		i++;
	}
	if (str[0] == 0 && to_find[0] == 0)
		return (str);
	return (0);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{	
	char	str[] = "abeilles";
	char	to_find[] = "l"; 
	size_t len  = 4; 
	printf("%s||%s", ft_strnstr(str, to_find, len), strnstr(str, to_find, len));	
}