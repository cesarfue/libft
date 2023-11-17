/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 07:07:18 by cesar             #+#    #+#             */
/*   Updated: 2023/11/17 14:50:19 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(char **splat)
{
	int	i;

	i = 0;
	while (splat[i])
		free(splat[i++]);
	free(splat);
	exit(1);
}

char	*ft_strndup(char const *src, int n)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] && i < n)
		i++;
	dest = malloc((i + 1) * sizeof(char));
	if (!dest)
	{
		free(dest);
		return (NULL);
	}
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_countwords(char const *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] != c)
		{
			words++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (words);
}

int	wordlen(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *str, char c)
{
	char	**splat;
	int		i;
	int		l;

	i = 0;
	l = 0;
	if (!str)
		return (NULL);
	splat = malloc(sizeof(char *) * (ft_countwords(str, c) + 1));
	if (!splat)
		return (NULL);
	while (str[i])
	{
		if (str[i] != c)
		{
			splat[l] = ft_strndup(&str[i], wordlen(&str[i], c));
			if (!splat[l++])
				ft_free(splat);
			i += wordlen(&str[i], c);
		}
		else
			i++;
	}
	splat[l] = NULL;
	return (splat);
}

/* #include <stdio.h>
int	main(int argc, char **argv)
{
	char	**splat;
	int		i;

	i = 0;
	if (argc == 3)
	{
		splat = ft_split(argv[1], argv[2][0]);
		while (splat[i])
			printf("%s\n", splat[i++]);
		ft_free(splat);
	}
	return (0);
} */
