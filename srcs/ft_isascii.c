/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:30:37 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/08 15:42:11 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int main(int argc, char **argv)
{
	if (argc < 2)
		return (-1);
    printf("OG is %d\n", isascii(argv[1][0]));
    printf("mine is %d\n", ft_isascii(argv[1][0]));
    return (0);
}  