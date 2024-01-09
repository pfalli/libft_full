NAME = libftprint.a

LIBFT = libft.a

LIBFT_PATH = ./libft

SRC =	$( \
				ft_printf_char.c \
				ft_print_string.c \
				ft_print_int.c \

	)

OBJS = $(SRC:.c=.o)

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

INC_DIR =	.

CPPFLAGS =-I$(INC_DIR)

all: $(LIBFT) $(NAME)

$(NAME):	$(OBJS)
		cp $(LIBFT_PATH) ./$(NAME) 

ar rc $(NAME) $(OBJS)

$(OBJS):
		$(CC) $(CPPFLAGS) $(CCFLAGS) $(SRC)

$(LIBFT):
		cd $(LIBFT_PATH) && $(MAKE)

test:	
	make 
	$(CC) $(NAME) main_ft_printf.c
	./a.out


clean:
	rm -f $(OBJS)
	cd ${LIBFT} && ${MAKE} clean

fclean:	clean
	rm -f ${NAME}
	cd ${LIBFT} && ${MAKE} fclean


re: fclean all

.PHONY:	all clean fclean re ${LIBFT} test