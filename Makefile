SRCS	=	ft_printf.c		\
			ft_putstr.c		\
			ft_convert.c	\
			ft_putnbr.c		\
			ft_putunbr.c	\
			ft_strupcase.c	\
			ft_putchar.c

OBJS	= 	${SRCS:.c=.o}

NAME	= 	libftprintf.a

CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			ar -rcs $(NAME) $(OBJS)

all:		${NAME}

clean:
			${RM} ${OBJSBON} ${OBJS}

fclean:		clean
			${RM} ${NAME} 

re:			fclean all

.PHONY:		bonus all clean fclean re