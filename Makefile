# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/07 15:49:57 by jkuusist          #+#    #+#              #
#    Updated: 2020/03/11 14:19:50 by jkuusist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEDR = includes/ft_printf.h

LIBFT = ./Libft

SRC_DIR = ./srcs

SOURCES = double_to_str.c ft_itoa_base_pf.c ft_printf.c ft_putstr_pf.c get_precision.c handle_specifier.c initializers.c \
number_putters.c numlen.c pointer_to_str.c toggle_flag.c

SRCS = $(addprefix $(SRC_DIR)/,$(SOURCES))

LIBFTSRCS = ft_atoi.c ft_bzero.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_isprint.c ft_lstnew.c ft_lstdelone.c \
ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_memcmp.c ft_memchr.c ft_memcpy.c ft_itoa.c ft_memalloc.c ft_memdel.c \
ft_memccpy.c ft_putchar.c ft_putendl.c ft_memset.c ft_putendl_fd.c ft_putchar_fd.c ft_memmove.c ft_putnbr.c ft_putstr_fd.c \
ft_putnbr_fd.c ft_putstr.c ft_strcat.c ft_strclr.c ft_strdel.c ft_strcpy.c ft_strchr.c ft_strequ.c ft_strdup.c ft_strcmp.c \
ft_striter.c ft_strjoin.c ft_striteri.c ft_strmapi.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strnequ.c ft_strncmp.c ft_strncat.c \
ft_strnew.c ft_strncpy.c ft_strrchr.c ft_strnstr.c ft_strsub.c ft_toupper.c ft_tolower.c ft_strtrim.c ft_strstr.c ft_strsplit.c \
ft_pow.c ft_strrev.c ft_itoa_base.c ft_strupper.c ft_strlower.c ft_putlong.c

OBJS = $(SRCS:.c=.o)

LIBFTOBJS = $(LIBFTSRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT)
	cp libft/libft.a ./$(NAME)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	
clean:
	rm $(OBJS) Libft/$(LIBFTOBJS)

fclean: clean
	rm $(NAME)

re: fclean all
