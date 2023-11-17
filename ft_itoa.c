/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:03:56 by cesar             #+#    #+#             */
/*   Updated: 2023/11/17 13:49:23 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	else if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	int		stop;
	char	*str;

	len = ft_intlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		stop = 1;
		str[0] = '-';
		n *= -1;
	}
	else
		stop = 0;
	str[len--] = 0;
	while (len >= stop)
	{
		str[len--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

/* int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("mio esta %s\n", ft_itoa(atoi(argv[1])));
	}
	return (0);
} */
