CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = phonebook

SRCS =	main.cpp \
		phonebook.cpp \
		contact.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean: 
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re