/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:22:23 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/09 15:12:35 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122)
		|| (c >= 65 && c <= 90)
		|| (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
/* 
int main(int argc, char **argv)
{
	if (argc < 2)
		return (-1);
    printf("OG is %d\n", isalnum(argv[1][0]));
    printf("mine is %d\n", ft_isalnum(argv[1][0]));
    return (0);
}  */ 