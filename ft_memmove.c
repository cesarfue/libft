/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:30:09 by cesar             #+#    #+#             */
/*   Updated: 2023/11/10 17:17:14 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;
	size_t				i;

	pdest = dest;
	psrc = src;
	i = 0;
	if (pdest < psrc)
	{
		while (pdest + i && i < n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	else
	{
		while (pdest + i && i < n)
		{
			pdest[n - i - 1] = psrc[n - i - 1];
			i++;
		}
	}
	return (dest);
}
