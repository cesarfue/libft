# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cesar <cesar@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 18:46:17 by cefuente          #+#    #+#              #
#    Updated: 2023/11/08 14:17:21 by cesar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -I -lbsd -I includes

SRC	=	srcs/ft_isalpha.c \
		srcs/ft_isdigit.c \
		srcs/ft_isalnum.c \
		srcs/ft_isascii \
		srcs/ft_isprint \
		srcs/ft_strlen \
		srcs/ft_memset \
		srcs/ft_bzero \
		srcs/ft_memcpy \
		srcs/ft_memmove \
		srcs/ft_strlcpy \
		srcs/ft_strlcat \
		srcs/ft_toupper \
		srcs/ft_tolower \
		srcs/ft_strchr \
		srcs/ft_strrchr \
		srcs/ft_strncmp \
		srcs/ft_memchr \
		srcs/ft_memcmp \
		srcs/ft_strnstr \
		srcs/ft_atoi \
		srcs/main 

OBJ	=	$(SRC:.c=.o)

NAME	=	libft.a

.c.o:
	gcc $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: clean fclean re all 
