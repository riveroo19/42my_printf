# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 12:53:53 by jrivero-          #+#    #+#              #
#    Updated: 2023/10/05 16:21:35 by jrivero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
FLAGS = -Wall -Werror -Wextra
RM = rm -f

FILES = ft_isalpha.c ft_memset.c ft_strlcpy.c ft_strnstr.c ft_toupper.c ft_atoi.c \
		ft_isascii.c ft_strchr.c ft_strlen.c ft_strrchr.c ft_isalnum.c ft_isdigit.c \
		ft_strlcat.c ft_strncmp.c ft_tolower.c ft_isprint.c  ft_bzero.c ft_memcpy.c \
		ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

FILES_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c	ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
		ft_lstmap_bonus.c 

OBJS = ${FILES:.c=.o}

OBJS_B = ${FILES_B:.c=.o}

%.o: %.c	#build objects from .c ($< prerrequisito, $@ target), @flag ommits msgs
		@${CC} ${FLAGS} -c $< -o $@

all:		${NAME}

${NAME}:	${OBJS}
		@ar rcs ${NAME} ${OBJS}
		@echo "Libft created succesfully!"

bonus: ${OBJS_B}
		@ar rcs ${NAME} ${OBJS_B}

clean:		
			@${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			@${RM} ${NAME}

re:			fclean all

.PHONY: all bonus clean fclean re
