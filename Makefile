NAME		=	libftprintf.a

SRC_PATH 	=	src
SRC			=	src/ft_putchar.c src/ft_putstr.c src/ft_putnbr.c\
				src/ft_printf.c  src/ft_putnbr_unsigned.c\
				src/ft_putnbr_hex.c src/ft_putpointer.c

INCLUDE 	=	includes/
HEADER		= 	ft_printf.h
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

