# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: scleerdi <scleerdi@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/04/11 15:40:00 by scleerdi       #+#    #+#                 #
#    Updated: 2020/02/10 12:23:45 by scleerdi      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = atoi bzero isalnum isalpha isascii isdigit islower isprint isupper \
		itoa lstadd lstdel lstdelone lstiter lstmap lstnew memalloc \
		memccpy memchr memcmp memcpy memdel memmove memset putchar_fd putchar \
		putendl_fd putendl abs intlen itoa_base\
		putnbr putnbr_fd putstr putstr_fd strcat strchr strclr strcmp \
		strcpy strdel sqrt a_is_int \
		strdup strequ striter striteri strjoin strlcat strlen strmap \
		strmapi strncat \
		strncmp strncpy strnequ strnew strnstr strrchr strsplit strstr \
		strsub strtrim \
		tolower toupper isblank isspace max min sort_int_tab get_next_line
SOURCE := $(SOURCE:%=ft_%.c)
OBJECT := $(SOURCE:%.c=%.o)

all: $(NAME)

$(NAME):
	@echo "Compiling Libft"
	@gcc -Wall -Werror -Wextra -c $(SOURCE) -I ./includes -g
	@ar -rcs $(NAME) $(OBJECT)

clean:
	@-rm -f $(OBJECT) ./includes/libft.gch

fclean: clean
	@-rm -f $(NAME)

re: fclean all
