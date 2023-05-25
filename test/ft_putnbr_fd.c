#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <stdlib.h>

TEST_GROUP(ft_putnbr_fd);

TEST_SETUP(ft_putnbr_fd)
{
}

TEST_TEAR_DOWN(ft_putnbr_fd)
{
}

TEST(ft_putnbr_fd, print_string_with_fd_and_newline)
{
	char number[] = "-222548";
	TEST_ASSERT_EQUAL_INT("", ft_putnbr_fd(number));
}
