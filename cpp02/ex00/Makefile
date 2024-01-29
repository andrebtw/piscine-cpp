# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anrodri2 < anrodri2@student.42lyon.fr >    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 17:48:56 by anrodri2          #+#    #+#              #
#    Updated: 2024/01/29 16:24:03 by anrodri2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:        fclean, all, clear, re

NAME            =	fixed

CMP             =   c++
FLAG            =   -Wall -Wextra -Werror -std=c++98
RM              =   rm -rf
BUILD_DIR       =   build/

HEADER_DIR      =   header
HEADER_FILE     =	Fixed 
INC             =   $(addsuffix .hpp, $(addprefix $(HEADER_DIR)/, $(HEADER_FILE)))

SRC_DIR         =   src
SRC_FILE        =   main Fixed
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