CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

SOURCES		=	./sources/ft_printf.c \
				./sources/ft_long_to_str.c \
				./sources/ft_print_char.c \
				./sources/ft_print_decimal.c \
				./sources/ft_print_pointer.c \
				./sources/ft_print_string.c \
				./sources/ft_print_unsigned.c \
				./sources/ft_unlong_to_str.c \

OBJECTS		=	$(SOURCES:.c=.o)

# Rule to compile .c files into .o files
.c.o:
		$(CC) $(CFLAGS) -c $< -o $@

# Compile the object files (no static libraries)
all: $(OBJECTS)

# Clean up the object files
clean:
		$(RM) $(OBJECTS)

# Full clean
fclean: clean

# Rebuild everything from scratch
re: fclean all

.PHONY: all clean fclean re
