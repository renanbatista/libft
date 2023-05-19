NAME=libft.a
CC=cc
CFLAGS=-Wall -Wextra -Werror
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c
OBJ = $(SRC:.c=.o)
UNITY_ROOT=./Unity
TARGET1 = all_tests.out libft.so
SRC_FILES1=\
  $(UNITY_ROOT)/src/unity.c \
  $(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
  $(SRC) \
  test/*.c
INC_DIRS=-I. -I$(UNITY_ROOT)/src -I$(UNITY_ROOT)/extras/fixture/src
SYMBOLS=-DUNITY_FIXTURE_NO_EXTRAS

all: $(NAME)

run:
	$(CC) $(CFLAGS) -lbsd $(INC_DIRS) $(SYMBOLS) $(SRC_FILES1) -o $(TARGET1) -D UNITY_OUTPUT_COLOR
	- ./$(TARGET1) -v

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

cleana: fclean
	rm -f $(TARGET1)

fclean: clean
	rm -f $(NAME)

re:	clean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)
