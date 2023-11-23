# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tanota <tanota@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 17:25:06 by tanota            #+#    #+#              #
#    Updated: 2023/11/23 19:26:57 by tanota           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					=					megaphone

SRCS					=					megaphone.cpp

CC						=					c++

CFLAGS					=					-Wall -Wextra -Werrror -std=c++98

RM						=					rm -rf

%.o						:					%.cpp
											$(CC) $(CFLAGS) -c $< -o $@

OBJS					=					$(SRCS:.cpp=.o)

all						:					$(NAME)

$(NAME)					:					$(OBJS)
											$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean					:
											$(RM) $(OBJS)

fclean					:					clean
											$(RM) $(NAME)

re						:					fclean all

prog					:					all clean
											clear

.PHONY					:					all clean fclean re
