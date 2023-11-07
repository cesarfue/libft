/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:40:02 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/07 11:40:47 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(int c)
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