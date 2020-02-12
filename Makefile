NAME = libft.a
CFILES = ft_*.c
OFILES = ft_*.o
$(NAME):
		@gcc -c -Wall -Werror -Wextra $(CFILES)
		@ar rcs $(NAME) $(OFILES)
		@ranlib $(NAME)

all: $(NAME)
gcc: re
		@gcc main.c $(NAME)
		@./a.out

clean:
		@rm -f $(OFILES)

fclean: clean
		@rm -f *.a
		@rm -f a.out

re : fclean all
