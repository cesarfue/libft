/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:40:02 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/08 15:43:11 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int main(int argc, char **argv)
{
	if (argc < 2)
		return (-1);
    printf("OG is %d\n", isdigit(argv[1][0]));
    printf("mine is %d\n", ft_isdigit(argv[1][0]));
    return (0);
} 