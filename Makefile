NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar -rcs
RAN = ranlib
RM = rm -f

INC = ft_printf.h

SRCS =	ft_printf.c \
		ft_printf_utils.c\
		ft_printf_utils2.c 
OBJ =	$(SRCS:.c=.o)

all: $(NAME)
$(NAME):	$(OBJ)	$(INC)
			$(AR)		$(NAME)	$(OBJ)
			$(RAN)		$(NAME)

.o: .c
	$(CC) -c $(CFLAGS) $(SRCS) -I $(INC) -o $@

clean:
	$(RM)	$(OBJ)

fclean: clean
	$(RM)	$(NAME)

re: fclean all

.PHONY: all clean fclean re
