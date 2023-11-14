/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:34:31 by cesar             #+#    #+#             */
/*   Updated: 2023/11/14 08:30:46 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		len;
	char		*out;

	i = 0;
	len = ft_strlen(s1);
	if (!set || !s1)
		return (NULL);
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (ft_strchr(set, s1[len - 1]) && len > i)
		len--;
	out = malloc(sizeof(char) * len - i + 1);
	if (!out)
		return (NULL);
	out = ft_substr(s1, i, len - i);
	return (out);
}
