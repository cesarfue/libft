/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:20:14 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/08 15:01:46 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c + 0)
			return (s + i);
		i++;
	}
	return (0);
}

int main (int argc, char **argv)
{
	if (argc != 3)
		return (-1);
	printf("OG is %s\n", strchr(argv[1], argv[2][0]));
	printf("mine is %s\n", ft_strchr(argv[1], argv[2][0]));
}