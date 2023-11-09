/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:14:25 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/09 11:13:31 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
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

int main (int argc, char **argv)
{
	if (argc != 3)
		return (-1);
	printf("OG is %s\n", strrchr(argv[1], atoi(argv[2][0])));
	printf("mine is %s\n", ft_strrchr(argv[1], atoi(argv[2][0])));
}