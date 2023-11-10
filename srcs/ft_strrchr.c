/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:14:25 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/09 15:29:23 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
 */
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == c + '\0')
			return (char *)&s[i];
		i--;
	}
	return (0);
}

/* 
int main (int argc, char **argv)
{
	if (argc != 3)
		return (-1);

	printf("OG is %s\n", strrchr(argv[1], argv[2][0]));
	printf("mine is %s\n", ft_strrchr(argv[1], argv[2][0]));
} */