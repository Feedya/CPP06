# Nom de l'exécutable final
NAME        = scalar

# Le compilateur de la cour
CXX         = c++

# Les exigences de qualité (Flags)
# -Wall -Wextra -Werror : La sainte trinité de la rigueur
# -std=c++98 : Pour s'assurer de ne point succomber aux sirènes de la modernité
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98

# Les parchemins à compiler
SRCS        = main.cpp print_que_des_nombres.cpp print_que_des_characteres.cpp print_float.cpp print_double.cpp print_nan.cpp ScalarConverter.cpp
OBJS        = $(SRCS:.cpp=.o)

# La règle principale (Première règle lue)
all: $(NAME)

# L'assemblage de l'exécutable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# La transformation des .cpp en .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Pour faire place nette (Supprime les fichiers objets)
clean:
	rm -f $(OBJS)

# Pour raser l'édifice (Supprime objets et exécutable)
fclean: clean
	rm -f $(NAME)

# Pour tout rebâtir depuis les fondations
re: fclean all

# Indique au système que ces noms ne sont point des fichiers
.PHONY: all clean fclean re