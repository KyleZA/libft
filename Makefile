# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/28 13:52:30 by kfrancis          #+#    #+#              #
#    Updated: 2019/05/31 09:52:02 by kfrancis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFILES = ft_isalnum.c ft_atoi.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_strcat.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlen.c ft_strncpy.c ft_tolower.c ft_toupper.c ft_bzero.c
OFILES = ft_isalnum.o ft_atoi.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_strcat.o ft_strcmp.o ft_strcpy.o ft_strdup.o ft_strlen.o ft_strncpy.o ft_tolower.o ft_toupper.o ft_bzero.o

$(NAME):
	gcc -c -Wall -Wextra -Werror $(CFILES)
	ar rcs $(NAME) $(OFILES)
	ranlib $(NAME)

all: $(NAME)
gcc : 
	@gcc main.c $(NAME)	  
	@./a.out

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f *.a
	rm -f a.out

re: fclean all
