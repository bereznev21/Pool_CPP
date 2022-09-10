NAME = megaphone
SOURCES = megaphone.cpp
OBJECTS = $(SOURCES:.cpp=.o)
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all:
	$(SOURCES) $(NAME)

$(NAME): $(OBJECTS)
	$(CC) 

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

re:
	rm -rf $(NAME)
	clang++ -Wall -Wextra -Werror megaphone.cpp -o megaphone

.PHONY: clean fclean re all bot libjson
