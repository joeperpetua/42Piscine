# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 13:49:59 by jperpetu          #+#    #+#              #
#    Updated: 2022/07/28 17:02:19 by jperpetu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJS	= ${SRCS:.c=.o}

INCL	= includes

GCC		= gcc

AR		= ar rc -s

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${GCC} ${CFLAGS} -I ${INCL} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all
