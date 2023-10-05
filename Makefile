NAME = libft.a

SRCS = ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_atoi.c ft_putchar_fd.c

OBJS = ${SRCS:.c=.o}

RM = rm -f

CC = gcc

FLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean:    clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
