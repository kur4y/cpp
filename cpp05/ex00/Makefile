# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tanota <tanota@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 17:25:06 by tanota            #+#    #+#              #
#    Updated: 2024/03/08 18:40:25 by tanota           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					=					bureaucrat

SRCS					=					Bureaucrat.cpp		\
											main.cpp

LIB						=					Bureaucrat.hpp

CC						=					c++

CFLAGS					=					-Wall -Wextra -Werror -std=c++98

RM						=					rm -rf

OBJS					=					$(SRCS:.cpp=.o)

all						:					$(NAME)

$(NAME)					:					$(OBJS) $(LIB)
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
