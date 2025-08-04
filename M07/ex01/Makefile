#<-------------------------------|VARIABLES|---------------------------------->#

NAME = iter
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

#<---------------------------------|FILES|------------------------------------>#

SRC = main.cpp

OBJ_F = ${SRC:.cpp=.o}
OBJ_D  = ./objects/
OBJ = $(addprefix $(OBJ_D), $(OBJ_F))

DEP_F = ${SRC:.cpp=.d}
DEP_D  = ./dependencies/
DEP = $(addprefix $(DEP_D), $(DEP_F))

#<---------------------------------|RULES|------------------------------------>#

all: $(NAME)

$(NAME): $(OBJ_D) $(DEP_D) $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ_D)%.o: %.cpp Makefile
	$(CXX) $(CXXFLAGS) -MMD -c $< -o $@
	mv $(@:.o=.d) $(DEP_D)

$(OBJ_D):
	mkdir $(OBJ_D)

$(DEP_D):
	mkdir $(DEP_D)

#<---------------------------------|PHONY|------------------------------------>#

clean:
	rm -rf $(OBJ_D) $(DEP_D)

fclean: clean
	rm -rf $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re
#<---------------------------------------------------------------------------->#
