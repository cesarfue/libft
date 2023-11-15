/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:24:23 by cesar             #+#    #+#             */
/*   Updated: 2023/11/15 14:32:32 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*out;
	unsigned int	i;
	size_t			size;

	i = 0;
	size = ft_strlen(s);
	if (start >= size)
		return (NULL);
	else if (len >= size)
		len = size - start + 1;
	out = malloc(sizeof(char) * (len + 1));
	if (!out)
		return (NULL);
	while (i < len)
	{
		out[i] = s[start + i];
		i++;
	}
	out[i] = 0;
	return (out);
}
/* 
int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%s\n", ft_substr(argv[1], (unsigned int)atoi(argv[2]), (size_t)atoi(argv[3])));
	}
} */