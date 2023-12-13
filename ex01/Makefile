# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 00:29:13 by mboudrio          #+#    #+#              #
#    Updated: 2023/12/13 15:58:07 by mboudrio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Define the compiler
CC = c++

# Define the flags to pass to the compiler
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=

# Define the source files for the so_long executable
SRC = PhoneBook.cpp Contact.cpp phony.cpp
# Define the object files for the so_long executable, generated from the source files
OBJ = $(SRC:.cpp=.o)

# Define the name of the so_long executable to be generated
NAME = cpp_0

# Define the default target to be built
all: $(NAME)

# Rule to generate the so_long executable from the object files
$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ)  -o $(NAME)

# Clean target to remove generated files
clean:
	rm -f $(OBJ) 

# Fclean target to remove executable files and perform clean
fclean: clean
	rm -f $(NAME)

# Re target to rebuild the project from scratch
re: fclean all
