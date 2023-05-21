NAME = main
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

.PHONY: all clean fclean re