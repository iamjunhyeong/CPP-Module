# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/28 21:57:44 by junhyeong         #+#    #+#              #
#    Updated: 2024/12/01 00:49:57 by junhyeong        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= c++ -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
NAME		= ./I_dont_want_to_set_the_world_on_fire
NAME_SHORT	= I_dont_want_to_set_the_world_on_fire

INCS_DIR	= .
MAIN_INC	= $(foreach D, $(INCS_DIR), -I$(D))

SRCS_DIR 	= .
SRCS		= 	main.cpp\
				Animal.cpp\
				Brain.cpp\
				Cat.cpp\
				Dog.cpp\

OBJS		= $(SRCS:.cpp=.o)

_COLOR		= \033[32m
_BOLDCOLOR	= \033[32;1m
_RESET		= \033[0m
_CLEAR		= \033[0K\r\c
_OK			= [\033[32mOK\033[0m]

%.o			: %.cpp
			@echo "[..] $(NAME_SHORT)... compiling $*.cpp\r\c"
			@$(CC) $(MAIN_INC) -c $< -o $@
			@echo "$(_CLEAR)"

all			: $(NAME)

$(NAME)		: $(OBJS) $(INCS)
			@$(CC) $(OBJS) $(MAIN_INC) -o $(NAME)
			@echo "$(_OK) $(NAME_SHORT) compiled"

clean		:
			@$(RM) $(OBJS)

fclean		: clean
			@$(RM) $(NAME)

re			: fclean all

.PHONY		: all clean fclean re