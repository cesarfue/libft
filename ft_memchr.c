/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:50:37 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/14 13:27:48 by cesar            ###   ########.fr       */
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
