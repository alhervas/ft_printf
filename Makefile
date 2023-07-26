# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alhervas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 18:07:48 by alhervas          #+#    #+#              #
#    Updated: 2023/05/03 18:07:50 by alhervas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC= ft_printf.c ft_printf_utils.c

NAME= libftprintf.a

CC= gcc

OBJS = $(SRC:.c=.o)

CFLAGS= -Wall -Wextra -Werror

${NAME}: ${OBJS}
	@ar r ${NAME} ${OBJS}

all: ${NAME}

clean:
	@rm -f ${OBJS} ${BONUS_OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclena all
