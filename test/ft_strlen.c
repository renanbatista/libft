#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <string.h>

TEST_GROUP(ft_strlen);

TEST_SETUP(ft_strlen)
{
}

TEST_TEAR_DOWN(ft_strlen)
{
}

TEST(ft_strlen, return_correct_string_lenght)
{
	TEST_ASSERT_EQUAL_INT(9, ft_strlen("Ola mundo"));
}