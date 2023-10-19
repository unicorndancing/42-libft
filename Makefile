NAME = libft.a
OBJS = $(SOURCES.c=.o) #remplace les .c par des .o dans les sources
CC = gcc
CFLAGS = Wall -Wextra -Werror #fsanitize=adress pour les leaks de memoires
SOURCES: ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_memset.c ft_strlcpy.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_strlcat.c ft_strlen.c

all : $(NAME)

clean: 
	rm -f $(OBJS)  #nettoi les .o

fclean: clean
	rm -f $(NAME) #nettoi tous

re: fclean $(CLEAN)
