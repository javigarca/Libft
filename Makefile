# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javi_pop <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 18:16:14 by javi_pop          #+#    #+#              #
#    Updated: 2021/10/29 20:15:35 by javi_pop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a

SRCS		= ft_atoi.c ft_strlen.c

DEPS		= libft.h

OBJS		= ${SRCS:.c=.o}

CC		= gcc

RM		= rm -f

CFLAGS		= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${CC} ${OBJS} ${DEPS} 
		ar rc ${NAME} 

all:		${NAME}

clean:		
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

PHONY:		all clean fclean re ${NAME}


