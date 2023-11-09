/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:50:37 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/09 14:30:25 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (const void *)&s[i];
		i++;
	}
	return (0);
}

int main (int argc, char **argv)
{
	if (argc < 3)
		return (-1);
	printf("OG is %p\n", memchr((const void *)argv[1], atoi(argv[2][0]), atoi(argv[3])));
	printf("mine is %p\n", ft_strchr((const void *)argv[1], atoi(argv[2][0]), atoi(argv[3])));
}