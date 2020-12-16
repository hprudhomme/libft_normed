# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/11 15:52:47 by hprudhom          #+#    #+#              #
#    Updated: 2020/12/11 18:17:56 by hprudhom         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= $(wildcard *.c)

OBJS	= $(SRCS:.c=.o)

NAME 	= libft.a

CC 		= cc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re