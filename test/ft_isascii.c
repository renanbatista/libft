#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_isascii);

TEST_SETUP(ft_isascii)
{
}

TEST_TEAR_DOWN(ft_isascii)
{
}

TEST(ft_isascii, return_1_when_is_ascii)
{
	TEST_ASSERT_EQUAL_INT(ft_isascii(1), 1);
}

TEST(ft_isascii, return_0_when_is_not_ascii)
{
	TEST_ASSERT_EQUAL_INT(ft_isascii(-1), 0);
	TEST_ASSERT_EQUAL_INT(ft_isascii(128), 0);
}