CC = cc
CFLAGS = -Wall -Wextra -Werror -I./headers
SRCDIR = srcs
OBJDIR = obj

SRCS = $(SRCDIR)/validation/map.c $(SRCDIR)/validation/metadata.c \
	   $(SRCDIR)/logic.c $(SRCDIR)/set/map.c $(SRCDIR)/set/metadata.c \
	   $(SRCDIR)/utils/is_char.c $(SRCDIR)/utils/strlen.c \
	   $(SRCDIR)/reading/metadata.c $(SRCDIR)/reading/lines.c \
	   $(SRCDIR)/main.c $(SRCDIR)/square.c $(SRCDIR)/atoi.c \
	   $(SRCDIR)/memory/realloc.c $(SRCDIR)/memory/free.c \
	   $(SRCDIR)/memory/alloc.c $(SRCDIR)/handling/stdin.c \
	   $(SRCDIR)/handling/map.c $(SRCDIR)/handling/file.c $(SRCDIR)/print.c 

OBJS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRCS))

NAME = bsq

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -rf $(OBJDIR)
	
fclean:
	rm -rf $(OBJDIR) $(NAME)

re: fclean all

$(OBJDIR)/%.o: $(SRCDIR)/%.c 
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

