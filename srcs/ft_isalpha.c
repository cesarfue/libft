/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:04:29 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/07 11:37:47 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h> 
#include <stdio.h>

int ft_isalpha(int c)
{
    if ((c >= 97 && c <= 122)
        || (c >= 65 && c <= 90))
        return (1); 
    else
        return (0); 
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (-1);
    printf("OG is %d\n", isalpha(argv(1)));
    printf("mine is %d\n", ft_isalpha(argv(1)));
    return (0);
}