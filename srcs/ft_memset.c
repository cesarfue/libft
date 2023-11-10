/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:10:42 by cesar             #+#    #+#             */
/*   Updated: 2023/11/10 14:21:23 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ps;
	size_t			i;

	ps = s;
	i = 0;
	if (n == 0)
		return (s);
	while (i < n)
	{
		ps[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

int	main(int argc, char **argv)
{
	if (argc < 4)
		return (-1);
	size_t size = (size_t)atoi(argv[3]);
	printf("OG is %p\n", memset((void *)argv[1], (int)argv[2][0], size));
	printf("mi is %p\n", ft_memset((void *)argv[1], (int)argv[2][0], size));
}
