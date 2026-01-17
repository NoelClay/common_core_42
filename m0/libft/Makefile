NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = file.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -r $(OBJS)

fclean: clean
	rm -r $(NAME)

re: fclean all