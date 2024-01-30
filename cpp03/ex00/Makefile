# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 16:39:04 by anrodri2          #+#    #+#              #
#    Updated: 2024/01/30 17:35:58 by anrodri2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:        fclean, all, clear, re

NAME            =	claptrap

CMP             =   c++
FLAG            =   -Wall -Wextra -Werror -std=c++98
RM              =   rm -rf
BUILD_DIR       =   build/

HEADER_DIR      =   header
HEADER_FILE     =	ClapTrap 
INC             =   $(addsuffix .hpp, $(addprefix $(HEADER_DIR)/, $(HEADER_FILE)))

SRC_DIR         =   src
SRC_FILE        =   main ClapTrap
SRC             =   $(addsuffix .cpp, $(addprefix $(SRC_DIR)/, $(SRC_FILE)))

OBJS            =   $(SRC:%.cpp=$(BUILD_DIR)%.o)

$(BUILD_DIR)%.o:	%.cpp $(INC)
					@mkdir -p $(@D)
					@$(CMP) $(FLAG) -I$(HEADER_DIR) -c $< -o $@

all:        		clear $(NAME)

$(NAME):    		$(INC) $(OBJS)
					@$(CMP) $(FLAG) $(OBJS) -I$(HEADER_DIR) -o $(NAME)
					@echo "\033[32m-- $(NAME) compile and create --\033[0m"

clear:
					clear

fclean:
					$(RM) $(NAME)
					$(RM) $(BUILD_DIR)

re:         		fclean all
