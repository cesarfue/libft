/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:14:25 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/08 13:14:41 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (s[i])
	{
		if (s[i] == c + 0)
			return (s + i);
		i--;
	}
	return (0);
}
