CC = gcc
TARGET = libft.a
OBJS = CUnit.o test.o ft_ctype.o ft_string.o ft_ctype2.o \
	ft_string2.o ft_string3.o ft_string4.o ft_string5.o ft_stdlib.o \
	ft_string6.o ft_file.o

CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -lc

all : $(TARGET)

$(TARGET) : $(OBJS)
	@$(CC) -o $@ $^

.c.o :
	@$(CC) $(CFLAGS) -c -o $@ $<

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(TARGET)

re : fclean all