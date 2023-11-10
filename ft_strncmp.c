/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:42:56 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/10 20:10:12 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)(s1[i] - s2[i]));
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
		printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}
