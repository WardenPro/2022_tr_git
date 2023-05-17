# E89 Pedagogical & Technical Lab
# project:     tr
# created on:  2022-10-27 - 17:43 +0200
# 1st author:  maxence.lenoble - maxence.lenoble
# description: Makefile


NAME	=	tr

SRCS	=	src/main.c				\
		    src/alloc.c				\
			src/trchar.c			\
			src/has_opt.c 			\
			src/strlen.c			\
			src/has_return.c		\
			src/delchar.c			\
			src/selectchar.c		\
			src/goodparam.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
