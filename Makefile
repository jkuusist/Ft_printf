# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/07 15:49:57 by jkuusist          #+#    #+#              #
#    Updated: 2020/03/10 11:15:51 by jkuusist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf 

HEDR = includes/ft_printf.h

LIBFT = ./Libft

SRCS = srcs/*.c

OBJECTS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror -g
all: $(NAME)

$(NAME):
	@make -C $(LIBFT) fclean
	@make -C $(LIBFT)
	@gcc $(FLAGS) $(SRCS) $(LIBFT)/libft.a -o $(NAME)

.PHONY: clean fclean re

clean:
	@rm -f $(OBJECTS)
	@make -C $(LIBFT) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT) fclean

re: fclean all
