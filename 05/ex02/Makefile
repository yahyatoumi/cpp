# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/15 20:00:06 by ytoumi            #+#    #+#              #
#    Updated: 2023/10/19 20:03:17 by ytoumi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	out

SRCS	=	main.cpp Bureaucrat.cpp AForm.cpp

OBJS	=	$(SRCS:.cpp=.o)

CXX		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

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
