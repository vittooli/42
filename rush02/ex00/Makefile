# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frpelill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/07 13:09:10 by frpelill          #+#    #+#              #
#    Updated: 2023/10/07 13:18:11 by frpelill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Wextra
NAME = rush-02
SRCDIR = src
INCDIR = lib
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(SRCS:.c=.o)

all:		${NAME}

%.o: %.c
	cc $(CFLAGS) -c $< -o  $@ -I $(INCDIR)

$(NAME): $(OBJS)
	cc $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
