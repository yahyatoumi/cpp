NAME	=	out

SRCS	=	main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

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
