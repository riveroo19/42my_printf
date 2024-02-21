# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 15:28:01 by jrivero-          #+#    #+#              #
#    Updated: 2023/10/12 13:28:28 by jrivero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
FLAGS = -Wall -Werror -Wextra
RM = rm -f

FILES_LIBFT = libft/ft_isalpha.c libft/ft_memset.c libft/ft_strlcpy.c libft/ft_strnstr.c libft/ft_toupper.c libft/ft_atoi.c \
		libft/ft_isascii.c libft/ft_strchr.c libft/ft_strlen.c libft/ft_strrchr.c libft/ft_isalnum.c libft/ft_isdigit.c \
		libft/ft_strlcat.c libft/ft_strncmp.c libft/ft_tolower.c libft/ft_isprint.c  libft/ft_bzero.c libft/ft_memcpy.c \
		libft/ft_memmove.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_calloc.c libft/ft_strdup.c libft/ft_substr.c \
		libft/ft_strjoin.c libft/ft_strtrim.c libft/ft_split.c libft/ft_itoa.c libft/ft_strmapi.c libft/ft_striteri.c \
		libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c
FILES = ft_printf.c ft_print_s.c ft_print_p.c ft_printnbr_base.c

OBJS = ${FILES:.c=.o}
OBJS_LIBFT = ${FILES_LIBFT:.c=.o}

%.o: %.c	#build objects from .c
		@${CC} ${FLAGS} -c $< -o $@

all:		${NAME}

${NAME}:	${OBJS_LIBFT} ${OBJS}
		@ar rcs ${NAME} ${OBJS_LIBFT} ${OBJS}
		@echo "Program created succesfully!"

clean:		
		@${RM} ${OBJS_LIBFT} ${OBJS}
		@echo "Cleaning... OK!"

fclean:		clean
		@${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
