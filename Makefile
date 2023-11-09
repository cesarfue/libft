# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cesar <cesar@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 18:46:17 by cefuente          #+#    #+#              #
#    Updated: 2023/11/08 14:26:47 by cesar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -I -lbsd -I includes

SRC	=	srcs/ft_isalpha.c \
		srcs/ft_isdigit.c \
		srcs/ft_isalnum.c \
		srcs/ft_isascii.c \
		srcs/main.c \
#		srcs/ft_isprint.c \
		srcs/ft_strlen.c \
		srcs/ft_memset.c \
		srcs/ft_bzero.c \
		srcs/ft_memcpy.c \
		srcs/ft_memmove.c \
		srcs/ft_strlcpy.c \
		srcs/ft_strlcat.c \
		srcs/ft_toupper.c \
		srcs/ft_tolower.c \
		srcs/ft_strchr.c \
		srcs/ft_strrchr.c \
		srcs/ft_strncmp.c \
		srcs/ft_memchr.c \
		srcs/ft_memcmp.c \
		srcs/ft_strnstr.c \
		srcs/ft_atoi.c \

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
