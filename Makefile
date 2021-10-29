# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javi_pop <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 18:16:14 by javi_pop          #+#    #+#              #
#    Updated: 2021/10/30 00:27:29 by javi_pop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a

SRCS		= ft_atoi.c \
		  ft_bzero.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_memchr.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_strchr.c \
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_strlen.c \
		  ft_strncmp.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_tolower.c \
		  ft_toupper.c \

HEADER		= libft.h

OBJS		= ${SRCS:.c=.o}

CC		= gcc

RM		= rm -f

AR		= ar rc

LIB		= ranlib

CFLAGS		= -Wall -Wextra -Werror -c

.c.o:
		${CC} ${CFLAGS} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${CC} ${OBJS} 
		${AR} ${NAME} ${OBJS}
		${LIB} ${NAME} ${HEADER}
 
all:		${NAME}

clean:		
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all


.PHONY:		all clean fclean re
