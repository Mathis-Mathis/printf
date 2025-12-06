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
CFLAGS		= -Wall -Wextra -Werror -I include

AR			= ar rcs
RM			= rm -f


#Pour ajouter les utils : utils/xxxx.c 
SRC			= src/ft_printf.c

OBJ			= $(SRC:.c=.o)



all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
