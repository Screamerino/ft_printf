NAME		=	libprintf.a

SRC_PATH 	=	src
SRC			=	src/ft_putchar.c src/ft_putstr.c src/ft_putnbr.c\
				src/ft_printf.c  src/ft_putnbr_unsigned.c

INCLUDE 	=	includes/
HEADER		= 	libprintf.h
OBJ			=	${SRC:%.c=%.o}

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -I ${INCLUDE}

.PHONY	:	all clean fclean re 

all		:	${NAME}

${NAME}	:	${OBJ} 	
	ar rcs ${NAME} $?

%.o : %.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

clean	:
	rm -f ${OBJ}

fclean	:	clean
	rm -f ${NAME}

re		:	fclean all

