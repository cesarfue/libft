/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:41:55 by cesar             #+#    #+#             */
/*   Updated: 2023/11/08 14:09:58 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int    main(int argc, char **argv)
{
    (void)argc;
	if (argc < 2)
		return (-1);
    int    i;
    char    *temp;
    char    *temp2;

    temp = malloc(ft_strlen(argv[2]) + 1);
        if (temp == 0)
            return (0);
    if (ft_strncmp(argv[1], "ft_bzero", ft_strlen(argv[1])) == 0)
    {
        for (i = 0; i < ft_strlen(argv[2]); i++)
            temp[i] = argv[2][i];
        ft_bzero(temp, atoi(argv[3]));
        printf("ft : ");
        for (i = 0; i < ft_strlen(argv[2]); i++)
            printf("%c", temp[i]);
        for (i = 0; i < ft_strlen(argv[2]); i++)
            temp[i] = argv[2][i];
        bzero(temp, atoi(argv[3]));
        printf("\nbase : ");
        for (i = 0; i < ft_strlen(argv[2]); i++)
            printf("%c\n", temp[i]);
    }
	else if (ft_strncmp(argv[1],"ft_is",ft_strlen(argv[1])) == 0)
    {

        printf("In order : ft_isalnum, ft_isalpha, ft_isascii, ft_isdigit, ft_isprint\n");
        while (++i <= 127)
        {
            printf("Ascii value : '%c'(%d)\n", i, i);
            printf("ft_  : ");
            printf("|%d|%d|%d|%d|%d|\n", ft_isalnum(i), ft_isalpha(i), ft_isascii(i), ft_isdigit(i), ft_isprint(i));
            printf("base : ");
            printf("|%d|%d|%d|%d|%d|\n", isalnum(i), isalpha(i), isascii(i), isdigit(i), isprint(i));
            printf("-----------------------------\n");
        }
    }
    else if (ft_strncmp(argv[1], "ft_strlen", ft_strlen(argv[1])) == 0)
    {
        printf("(String = %s)\n", argv[2]);
        printf("ft_  : ");
        printf("%zu\n", ft_strlen(argv[2]));
        printf("base : ");
        printf("%zu\n", strlen(argv[2]));
    }
    else if (ft_strncmp(argv[1], "ft_memcpy", ft_strlen(argv[1])) == 0)
    {
        printf("ft_  : ");
        printf("%s\n", (char *)ft_memcpy(argv[2], argv[3], atoi(argv[4])));
        printf("base  : ");
        printf("%s\n", (char *)memcpy(argv[2], argv[3], atoi(argv[4])));
    }
    else if (ft_strncmp(argv[1], "ft_memset", ft_strlen(argv[1])) == 0)
    {
        printf("ft_  : ");
        printf("%s\n", (char *)ft_memset(argv[2], atoi(argv[3]), atoi(argv[4])));
        printf("base  : ");
        printf("%s\n", (char *)memset(argv[2], atoi(argv[3]), atoi(argv[4])));
    }
	else if (ft_strncmp(argv[1], "ft_memmove", ft_strlen(argv[1])) == 0)
    {
        printf("ft_  : ");
        printf("%s\n", (char *)ft_memmove(argv[2], argv[3], atoi(argv[4])));
        printf("base  : ");
        printf("%s\n", (char *)memmove(argv[2], argv[3], atoi(argv[4])));
    }
    else if(ft_strncmp(argv[1], "ft_strlcpy", ft_strlen(argv[1])) == 0)
    {
        for (i = 0; argv[2][i]; i++)
            temp[i] = argv[2][i];
        temp[i] = 0;
        printf("ft_   : ");
        printf("(%zu) ", ft_strlcpy(temp, argv[3], atoi(argv[4])));
        printf("%s\n", temp);
        for (i = 0; argv[2][i]; i++)
            temp[i] = argv[2][i];
        printf("base  : ");
        printf("(%zu) ", strlcpy(temp, argv[3], atoi(argv[4])));
        printf("%s\n", temp);
    }
    else if(ft_strncmp((argv[1]), "ft_strlcat", ft_strlen(argv[1])) == 0)
    {
        for (i = 0; argv[2][i]; i++)
            temp[i] = argv[2][i];
        temp[i] = 0;
        printf("ft_   : ");
        printf("(%zu) ", ft_strlcat(temp, argv[3], atoi(argv[4])));
        printf("%s\n", temp);
        for (i = 0; argv[2][i]; i++)
            temp[i] = argv[2][i];
        temp[i] = 0;
        printf("base  : ");
        printf("(%zu) ", strlcat(temp, argv[3], atoi(argv[4])));
        printf("%s\n", temp);
    }
    free(temp);
    return (0);
}