# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tanota <tanota@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 17:25:06 by tanota            #+#    #+#              #
#    Updated: 2024/03/04 15:05:20 by tanota           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					=					polymorphism

SRCS					=					Animal.cpp		\
											Cat.cpp			\
											Dog.cpp			\
											main.cpp		\
											WrongAnimal.cpp	\
											WrongCat.cpp

CC						=					c++

CFLAGS					=					-Wall -Wextra -Werror -std=c++98

RM						=					rm -rf

OBJS					=					$(SRCS:.cpp=.o)

all						:					$(NAME)

$(NAME)					:					$(OBJS)
											$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o						:					%.cpp
											$(CC) $(CFLAGS) -c $< -o $@

clean					:
											$(RM) $(OBJS)

fclean					:					clean
											$(RM) $(NAME)

re						:					fclean all

prog					:					all clean
											clear

.PHONY					:					all clean fclean re
