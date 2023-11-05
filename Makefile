NAME = libft.a
OBJS = $(SOURCES:.c=.o) #remplace les .c par des .o dans les sources
OBJSBNS = $(SOURCESBONUS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror #fsanitize=adress pour les leaks de memoires
SOURCES = ft_isalnum.c \
 	ft_isprint.c \
  	ft_memcpy.c   \
    ft_putendl_fd.c \
	ft_strdup.c  \
	ft_strlen.c \
	ft_strrchr.c \
	ft_toupper.c \
	ft_atoi.c   \
 	ft_isalpha.c \
 	ft_itoa.c   \
    ft_memmove.c  \
	ft_putnbr_fd.c  \
	ft_strjoin.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_strtrim.c \
	ft_bzero.c  \
 	ft_isascii.c \
  	ft_memchr.c \
    ft_memset.c   \
	ft_putstr_fd.c \
	ft_strlcat.c \
	ft_strncmp.c \
	ft_substr.c  \
	ft_calloc.c \
 	ft_isdigit.c  \
	ft_memcmp.c  \
 	ft_putchar_fd.c \
 	ft_strchr.c \
    ft_strlcpy.c \
	ft_strnstr.c \
	ft_split.c \
	ft_tolower.c

SOURCESBONUS =	ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstnew.c \
	ft_lstsize.c \
	ft_lstmap.c

all : $(NAME)
	
$(NAME) : $(OBJS) 
	ar rcs $(NAME) $(OBJS)  

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ 
	
clean: 
	rm -f $(OBJS) $(OBJSBNS) 

fclean: clean
	rm -f $(NAME) 

re: fclean all

bonus: $(OBJS) $(OBJSBNS)
	ar rcs $(NAME) $(OBJS) $(OBJSBNS)
