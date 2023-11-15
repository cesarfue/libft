/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:22:26 by cesar             #+#    #+#             */
/*   Updated: 2023/11/15 11:17:01 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;
	size_t				i;

	pdest = dest;
	psrc = src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

/* int	main(int argc, char **argv)
{
	if (argc < 4)
		return (-1);
	size_t size = (size_t)atoi(argv[3]);
	printf("OG is %p\n", memcpy((void *)argv[1], (const void *)argv[2], size));
	printf("mi is %p\n", ft_memcpy((void *)argv[1], (const void *)argv[2], size));
} */
