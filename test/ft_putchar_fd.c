#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <stdlib.h>

TEST_GROUP(ft_putchar_fd);

TEST_SETUP(ft_putchar_fd)
{
}

TEST_TEAR_DOWN(ft_putchar_fd)
{
}

TEST(ft_putchar_fd, print_char_with_fd)
{
	char number[] = "-222548";
	TEST_ASSERT_EQUAL_INT(itoa(number), ft_putchar_fd(number));
}
