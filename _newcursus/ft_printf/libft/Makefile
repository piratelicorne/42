# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhuerta <mhuerta@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/29 02:31:48 by mhuerta           #+#    #+#              #
#    Updated: 2020/11/09 16:52:14 by mhuerta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

# Variables section starts here #

NAME = libft.a

SRCS = ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c ft_strlen.c \
		ft_isdigit.c ft_strsub.c ft_intlen.c ft_putnbr.c ft_putnbr_fd.c \
		ft_uintlen.c ft_putunbr.c ft_strnew.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CC = gcc


# Rules section starts here #

all: $(NAME)
	@echo	libft has been compiled

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

compile:
	@$(CC) main.c -L. -lft
	@echo	main compiled

clean:
	@rm -f *.o
	@rm -f libft.a

fclean: clean
	@rm -f $(NAME)

re: fclean all
