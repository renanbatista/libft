#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <stdlib.h>

TEST_GROUP(ft_putstr_fd);

TEST_SETUP(ft_putstr_fd)
{
}

TEST_TEAR_DOWN(ft_putstr_fd)
{
}

TEST(ft_putstr_fd, print_string_with_fd)
{
	char number[] = "-222548";
	TEST_ASSERT_EQUAL_INT("", ft_putstr_fd(number));
}
