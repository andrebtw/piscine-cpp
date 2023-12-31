# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 20:30:36 by anrodri2          #+#    #+#              #
#    Updated: 2023/11/30 15:11:34 by anrodri2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#### SYSTEM ####
.PHONY: $(NAME) all clean fclean re
CC = c++
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -std=c++98

#### SOURCE FILES ####
SRCS =	megaphone.cpp

OBJS = $(SRCS:.c=.o)


### FINAL COMPILATION FILE ###
NAME = megaphone

#### RULES ####
$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

%.o: %.c	
			$(CC) $(CFLAGS) -c $< -o $@ -g3

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:
			$(RM) $(OBJS) $(NAME)

re:	fclean $(NAME)
