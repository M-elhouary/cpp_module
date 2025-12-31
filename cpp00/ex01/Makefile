NAME = phonebook

CXX = c++

CXXFLAGS = -Wall -Werror  -Wextra --std=c++98

SRCS = Contact.cpp PhoneBook.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)

all:$(NAME)


$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)


clean:
	rm -f $(OBJ)
fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: re clean fclean all

