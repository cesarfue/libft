/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:22:26 by cesar             #+#    #+#             */
/*   Updated: 2023/11/10 16:01:32 by cesar            ###   ########.fr       */
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
	while (pdest + i && i < n)
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
