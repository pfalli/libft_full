NAME = libtfull.a

# Directories
INC = inc/
SRC_DIR = src/
OBJ_DIR = obj/

# compilers and flags
CC = gcc
FLAGS = -Wall -Werror -Wextra -I

# src directories
LIBFT_DIR	=	$(SRC_DIR)ft_isalpha \		ft_memmove \		ft_strjoin \				
				 ft_isdigit \				ft_memchr \			ft_strtrim \	
				 ft_isalnum \				ft_strnstr \		ft_itoa \		
				 ft_isascii \				ft_strrchr \		ft_strmapi \		
				 ft_isprint \				ft_strchr \			ft_striteri \	
				 ft_strlen \				ft_strncmp \		ft_striteri \		
				 ft_memset \				ft_memcmp \			ft_putchar_fd \	
				 ft_bzero \					ft_tolower \		ft_putstr_fd \	
				 ft_memcpy \				ft_toupper \		ft_putendl_fd \		
				 ft_strlen \				ft_atoi \			ft_split \	
				 ft_strlcpy \				ft_calloc \			ft_substr \	
				 ft_strlcat \				ft_strdup \				

PRINTF_DIR =$(SRC_DIR) ft_printf.c\
						ft_print_char.c\
						ft_print_hexa.c\
						ft_print_nbr.c\
						ft_print_percentage.c\
						ft_print_ptr.c\
						ft_print_string.c\
						ft_print_u.c\
						ft_print_uphexa.c\

GNL_DIR = $(SRC_DIR) get_next_line.c\
						get_next_line_utils.c


#-----------------------------------------------------------------
SRC = $(LIBFT_DIR)$(PRINTF_DIR)$(GNL_DIR)

OBJ = $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRC))

# build rules make
all:	$(NAME)

$(NAME):	$(OBJ)
				ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
				mkdir -p $(@D)
				$(CC) $(FLAGS) $(INC) -c $< -o $@

clean:
				rm -f $(OBJ_DIR)

fclean: 		clean
				rm -f $(NAME)

re: 			fclean all

.PHONY: 		all clean fclean re