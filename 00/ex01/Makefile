# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 16:49:29 by ytoumi            #+#    #+#              #
#    Updated: 2023/07/07 18:54:14 by ytoumi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phone

SRCS	=	main.cpp PhoneBook.class.cpp Contact.class.cpp
HEADERS	=	Contact.class.hpp PhoneBook.class.hpp

OBJS	=	$(SRCS:.cpp=.o)

CXX		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all
