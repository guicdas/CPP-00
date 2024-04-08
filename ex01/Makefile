CC				= c++
CFLAGS			= -Wall -Wextra -Werror -std=c++98
RM				= rm -fr

NAME			= MyAwesomePhoneBook

SOURCES			= main.cpp Phonebook.cpp Contact.cpp

SOURCES_O		= $(SOURCES:.cpp=.o)

all:			$(NAME)

$(NAME):	$(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(NAME) $(<:.c=.o)

clean:
	$(RM) $(SOURCES_O)

fclean:			clean
	$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re