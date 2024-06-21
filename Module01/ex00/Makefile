CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

NAME = Zombie

SRCS =	Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \
		main.cpp

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