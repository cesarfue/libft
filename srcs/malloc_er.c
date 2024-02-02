/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_er.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:16:57 by cefuente          #+#    #+#             */
/*   Updated: 2024/02/02 15:17:04 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*malloc_er(size_t size) /* Malloc, but better */
{
	void	*ret;

	ret = malloc(size);
	if (ret == NULL)
		quit("Memory allocation failed");
	return (ret);
}
