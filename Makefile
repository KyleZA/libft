# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfrancis <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/28 13:52:30 by kfrancis          #+#    #+#              #
#    Updated: 2019/06/06 10:13:36 by kfrancis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFILES = ft_*.c
OFILES = ft_*.o

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
