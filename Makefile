# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/30 17:12:36 by mmousli           #+#    #+#              #
#    Updated: 2025/11/30 17:12:38 by mmousli          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
INCLUDES	= -I include

AR			= ar rcs
RM			= rm -f


SRC			= src/ft_printf.c

UTILS		= utils/ft_putchar.c utils/ft_putstr.c utils/ft_putptr.c utils/ft_puthex.c utils/ft_putnbr.c utils/ft_putnbr_u.c

OBJ			= $(SRC:.c=.o) $(UTILS:.c=.o)



all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
