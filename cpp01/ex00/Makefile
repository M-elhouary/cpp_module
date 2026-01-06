NAME = zombie

CXX = c++

CXXFLAGS = -Wextra -Wall -Werror -std=98

SRC = main.cpp newZombie.cpp Zombie.cpp randomChump.cpp


OBG = $(SRC .cpp=.o)

all : NAME


NAME : $(OBG)
	$(CXX) $(CXXFLAGS) -c NAME $(OBG) -o 

%.o:%.cpp
	$(CXX) $(CXXFLAGS)  -c $< -o $@

clean : 
	rm -f NAME $(OBG)

fclean : clean 
	rm -f NAME

re:
 fclean all

.PHONY : clean all fclean re
