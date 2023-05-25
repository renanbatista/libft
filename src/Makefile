NAME=libft.a
CC=cc
CFLAGS=-Wall -Wextra -Werror
FILES = \
	ft_isalpha \
	ft_isdigit \
	ft_isalnum \
	ft_isascii \
	ft_isprint \
	ft_strlen \
	ft_memset \
	ft_bzero \
	ft_memcpy \
	ft_memmove \
	ft_strlcpy \
	ft_strlcat \
	ft_toupper \
	ft_tolower \
	ft_strchr \
	ft_strrchr \
	ft_strncmp \
	ft_memchr \
	ft_memcmp \
	ft_strnstr \
	ft_atoi \
	ft_calloc \
	ft_strdup \
	ft_substr \
	ft_strjoin \
	ft_strtrim \
	ft_itoa \
	ft_strmapi \
	ft_striteri \
	ft_putchar_fd \
	ft_putstr_fd \
	ft_putendl_fd \
	ft_putnbr_fd \
	ft_split \

SRC_DIR = ./
SRC = $(addprefix $(SRC_DIR), $(addsuffix .c, $(FILES)))
OBJ = $(addprefix $(SRC_DIR), $(addsuffix .o, $(FILES)))

UNITY_ROOT=../Unity
TARGET1 = all_tests.out
SRC_FILES1=\
  $(UNITY_ROOT)/src/unity.c \
  $(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
  $(SRC) \
  ../test/*.c
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
