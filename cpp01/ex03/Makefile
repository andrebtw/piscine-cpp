# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 11:21:49 by anrodri2          #+#    #+#              #
#    Updated: 2024/02/02 15:50:08 by anrodri2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:        fclean, all, clear, re

NAME            =	human

CMP             =   c++
FLAG            =   -Wall -Wextra -Werror -std=c++98
RM              =   rm -rf
BUILD_DIR       =   build/

HEADER_DIR      =   header
HEADER_FILE     =	HumanA HumanB Weapon
INC             =   $(addsuffix .hpp, $(addprefix $(HEADER_DIR)/, $(HEADER_FILE)))

SRC_DIR         =   src
SRC_FILE        =   main HumanA HumanB Weapon
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