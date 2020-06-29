# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/07 15:49:57 by jkuusist          #+#    #+#              #
#    Updated: 2020/03/11 15:22:35 by jkuusist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEDR = includes/ft_printf.h

LIBFT = ./Libft

SRCS = double_to_str.c fill_width.c ft_printf.c ft_strndup.c handlers.c handle_specs.c initializer.c numlen.c print_bin.c print_char.c print_double.c print_format.c print_format_str.c print_hex.c print_int.c print_oct.c print_percent.c print_ptr.c print_str.c reinit.c ft_putchar_pf.c

OBJS = double_to_str.o fill_width.o ft_printf.o ft_strndup.o handlers.o handle_specs.o initializer.o numlen.o print_bin.o print_char.o print_double.o print_format.o print_format_str.o print_hex.o print_int.o print_oct.o print_percent.o print_ptr.o print_str.o reinit.o ft_putchar_pf.o

LIBFTSRCS = ft_atoi.c ft_bzero.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_isprint.c ft_lstnew.c ft_lstdelone.c \
ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_memcmp.c ft_memchr.c ft_memcpy.c ft_itoa.c ft_memalloc.c ft_memdel.c \
ft_memccpy.c ft_putchar.c ft_putendl.c ft_memset.c ft_putendl_fd.c ft_putchar_fd.c ft_memmove.c ft_putnbr.c ft_putstr_fd.c \
ft_putnbr_fd.c ft_putstr.c ft_strcat.c ft_strclr.c ft_strdel.c ft_strcpy.c ft_strchr.c ft_strequ.c ft_strdup.c ft_strcmp.c \
ft_striter.c ft_strjoin.c ft_striteri.c ft_strmapi.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strnequ.c ft_strncmp.c ft_strncat.c \
ft_strnew.c ft_strncpy.c ft_strrchr.c ft_strnstr.c ft_strsub.c ft_toupper.c ft_tolower.c ft_strtrim.c ft_strstr.c ft_strsplit.c \
ft_pow.c ft_strrev.c ft_itoa_base.c ft_strupper.c ft_strlower.c ft_putlong.c

LIBFTOBJS = $(LIBFTSRCS:.c=.o)

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	make -C $(LIBFT)
	cp Libft/libft.a ./$(NAME)
	$(CC) $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	
clean:
	rm -f $(OBJS)
	make clean -C $(LIBFT)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT)

re: fclean all
