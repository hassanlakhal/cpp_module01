# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 04:38:03 by hlakhal-          #+#    #+#              #
#    Updated: 2023/10/03 04:38:35 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

SRC = main.cpp  Harl.cpp

CXXFLAGS = -Wall -Wextra -Werror

CXX = c++ -std=c++98

all: $(NAME)

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all