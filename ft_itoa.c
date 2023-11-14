/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:03:56 by cesar             #+#    #+#             */
/*   Updated: 2023/11/14 20:11:20 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char *));
	if (n >= 10)
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	else
	{
		str[i] = (char)malloc(sizeof(char));
		str[i] = n + 0;
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("mio esta %s\n", ft_itoa(atoi(argv[1])));
	return (0);
}