/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:24:37 by cesar             #+#    #+#             */
/*   Updated: 2024/02/02 15:16:48 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*ret;

	ret = malloc_er(new_size);
	if (!ptr)
		return (ret);
	ft_memmove(ret, ptr, old_size);
	return (free(ptr), ret);
}
