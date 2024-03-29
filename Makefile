# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cesar <cesar@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 18:46:17 by cefuente          #+#    #+#              #
#    Updated: 2024/02/06 14:00:05 by cesar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	=	srcs/ft_atoi.c srcs/ft_bzero.c srcs/ft_calloc.c srcs/ft_isalnum.c srcs/ft_isalpha.c srcs/ft_isascii.c srcs/ft_isdigit.c \
	srcs/ft_isprint.c srcs/ft_itoa.c srcs/ft_memchr.c srcs/ft_memcmp.c srcs/ft_memcpy.c srcs/ft_memmove.c srcs/ft_memset.c srcs/ft_putchar_fd.c \
	srcs/ft_putendl_fd.c srcs/ft_putnbr_fd.c srcs/ft_putstr_fd.c srcs/ft_split.c srcs/ft_strchr.c srcs/ft_strdup.c srcs/ft_striteri.c srcs/ft_strjoin.c \
	srcs/ft_strlcat.c srcs/ft_strlcpy.c srcs/ft_strlen.c srcs/ft_strmapi.c srcs/ft_strncmp.c srcs/ft_strnstr.c srcs/ft_strrchr.c srcs/ft_strtrim.c \
	srcs/ft_substr.c srcs/ft_tolower.c srcs/ft_toupper.c \
	srcs/ft_lstadd_back.c srcs/ft_lstadd_front.c srcs/ft_lstclear.c srcs/ft_lstdelone.c srcs/ft_lstiter.c srcs/ft_lstlast.c \
	srcs/ft_lstmap.c srcs/ft_lstnew.c srcs/ft_lstsize.c \
	srcs/printf/ft_printf.c srcs/printf/ft_numbers.c srcs/printf/ft_strings.c srcs/printf/ft_switch.c \
	srcs/get_next_line.c \
	srcs/quit.c srcs/ft_strndup.c srcs/ft_realloc.c srcs/freetab_in.c srcs/freetab.c \

OBJS	=	$(patsubst srcs/%.c, objs/%.o, $(SRCS))
HEADER    =    includes/libft.h includes/ft_printf.h
NAME    =    libft.a
CC        =    cc -g 
AR        =    ar -rc
FLAGS    =    -Wall -Wextra -Werror

all        :    ${NAME}

objs/%.o        :    srcs/%.c ${HEADER}
	${CC} ${FLAGS} -c $< -o $@

${NAME}    :    ${OBJS} Makefile
	${AR} ${NAME} ${OBJS}

clean    :
	rm -f ${OBJS}

fclean    :    clean
	rm -f ${NAME}

re        :    fclean all

.PHONY    :    all clean fclean re
