#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_isalpha);

TEST_SETUP(ft_isalpha)
{
}

TEST_TEAR_DOWN(ft_isalpha)
{
}

TEST(ft_isalpha, return_1_when_is_alpha)
{
	TEST_ASSERT_EQUAL_INT(ft_isalpha('a'), 1);
	TEST_ASSERT_EQUAL_INT(ft_isalpha('D'), 1);
}

TEST(ft_isalpha, return_0_when_is_not_alpha)
{
	TEST_ASSERT_EQUAL_INT(ft_isalpha('*'), 0);
	TEST_ASSERT_EQUAL_INT(ft_isalpha('\n'), 0);
}
