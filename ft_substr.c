/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:24:23 by cesar             #+#    #+#             */
/*   Updated: 2023/11/14 08:26:38 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*out;
	unsigned int	i;

	i = 0;
	out = malloc(sizeof(char) * (len + 1));
	if (!out)
		return (NULL);
	while (i < len && s[start + i])
	{
		out[i] = s[start + i];
		i++;
	}
	out[i++] = '\0';
	return (out);
}
