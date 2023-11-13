SOURCES =	ft_isalpha.c	\
         	ft_isdigit.c	\
         	ft_isalnum.c	\
         	ft_isascii.c	\
         	ft_isprint.c	\
         	ft_strlen.c		\
         	ft_memset.c		\
         	ft_bzero.c		\
         	ft_memcpy.c		\
         	ft_memmove.c	\
         	ft_strlcpy.c	\
         	ft_strlcat.c	\
         	ft_toupper.c	\
         	ft_tolower.c	\
         	ft_strchr.c		\
         	ft_strrchr.c	\
         	ft_strncmp.c	\
         	ft_memchr.c		\
         	ft_memcmp.c		\
         	ft_strnstr.c	\
         	ft_atoi.c		\
         	ft_calloc.c		\
         	ft_strdup.c		\
         	ft_substr.c		\
         	ft_strjoin.c	\
         	ft_strtrim.c	\
         	ft_split.c		\
         	ft_itoa.c		\
         	ft_strmapi.c	\
         	ft_striteri.c	\
         	ft_putchar_fd.c	\
         	ft_putstr_fd.c 	\
         	ft_putendl_fd.c	\
         	ft_putnbr_fd.c

BONUS	=	ft_lstnew.c		\
			ft_lstadd_front.c\
			ft_lstsize.c	\
			ft_lstlast.c

OBJECTS = ${SOURCES:.c=.o}
B_OBJECTS = ${BONUS:.c=.o}
HEADER_FILE = ./libft.h
NAME = libft.a
CC = cc
FLAGS =  -Wall -Wextra -Werror

%.o:%.c	${HEADER_FILE}
	${CC} ${FLAGS} -c $< -o $@ -I.

${NAME}:	${OBJECTS}
	ar -rc ${NAME} ${OBJECTS}

${B_NAME}:	${OBJECTS} ${B_OBJECTS}
	ar -rc ${B_NAME} ${OBJECTS} ${B_OBJECTS}

all: ${NAME}

bonus: ${B_NAME}

clean:
	rm -f ${OBJECTS} ${B_OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all bonus clean fclean re