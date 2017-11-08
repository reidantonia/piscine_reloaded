# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: areid <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/17 11:03:41 by areid             #+#    #+#              #
#    Updated: 2017/08/22 23:09:07 by areid            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_putstr.c	\
	   ft_strlen.c	\
	   ft_swap.c	\
	   ft_strcmp.c	\
	   ft_putchar.c	\

INCLUDES = includes

C_SRCS = $(addprefix ./srcs/,$(SRCS))

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(C_SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
