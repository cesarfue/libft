/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:04:29 by cefuente          #+#    #+#             */
/*   Updated: 2023/11/08 08:41:40 by cefuente         ###   ########.fr       */
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

int main(void)
{
    printf("OG is %d\n", isalpha('a'));
    printf("mine is %d\n", ft_isalpha('a'));
    return (0);
}