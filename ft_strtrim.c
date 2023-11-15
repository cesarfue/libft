/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:34:31 by cesar             #+#    #+#             */
/*   Updated: 2023/11/15 09:19:10 by cesar            ###   ########.fr       */
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

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*out;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	out = malloc(sizeof(char) * (len + 1));
	if (!out)
		return (NULL);
	while (i < len && s[start + i])
	{
		out[i] = s[start + i];
		i++;
	}
	out[i] = 0;
	return (out);
} */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		len;
	char		*out;

	i = 0;
	if (set == NULL || s1 == NULL)
		return (NULL);
	len = ft_strlen(s1);
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

/* int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%s\n", ft_strtrim(argv[1], argv[2]));
} */
