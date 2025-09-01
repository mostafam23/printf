# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-moha <mel-moha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/31 12:26:25 by mel-moha          #+#    #+#              #
#    Updated: 2025/05/31 12:26:26 by mel-moha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC     = ft_printf.c ft_printf_help1.c ft_printf_help2.c ft_printf_help3.c

OBJ     = $(SRC:.c=.o)

NAME    = libftprintf.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus