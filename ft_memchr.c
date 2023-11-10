/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:50:37 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/10 16:01:28 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ps;
	size_t				i;

	ps = s;
	i = 0;
	while (ps + i && i < n)
	{
		if ((ps[i]) == (unsigned char) c)
			return ((void *)(ps + i));
		i++;
	}
	return (0);
}

/* int	main(int argc, char **argv)
{
	if (argc < 4)
		return (-1);
	size_t size = (size_t)atoi(argv[3]);
	printf("OG is %p\n", memchr((const void *)argv[1], (int)argv[2][0], size));
	printf("mi is %p\n", ft_memchr((const void *)argv[1], (int)argv[2][0], size));
} */
