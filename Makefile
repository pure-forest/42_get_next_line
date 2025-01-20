NAME = get_next_line
SRCS = 	get_next_line.c \
		get_next_line_utils.c \
		main.c
OBJS = ${SRCS:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: ${NAME}

%.o: %.c
	@${CC} ${CFLAGS} -o $@ -c $<

${NAME}: ${OBJS}
	${CC} ${OBJS} -o ${NAME}

clean:
	${RM} $(OBJS)

fclean:clean
	${RM} $(NAME)

re: fclean all

.PHONY: all clean fclean re
