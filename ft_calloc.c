/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:27:27 by cesar             #+#    #+#             */
/*   Updated: 2023/11/15 07:49:38 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*mem;

	i = 0;
	if (!nmemb || !size)
		return (NULL);
	mem = malloc(size * nmemb);
	if (!mem)
		return (NULL);
	while (i < nmemb)
		ft_memset(mem + i++, 0, size);
	return (mem);
}
