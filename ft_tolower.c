/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:18:51 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/09 15:29:43 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
		return (c);
	}
	else
		return (c);
}

/* int	main(int argc, char **argv)
{
	if (argc != 2)
		return (-1);
	char res1 = argv[1][0];
	char res2 = argv[1][0];
	printf("OG is %d\n", tolower(argv[1][0]));
	printf("mine is %d\n", ft_tolower(argv[1][0]));
	printf("res1 is %s\nres2 is %s\n", res1, res2);
} */