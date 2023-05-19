#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_isalnum);

TEST_SETUP(ft_isalnum)
{
}

TEST_TEAR_DOWN(ft_isalnum)
{
}

TEST(ft_isalnum, return_1_when_is_num)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum('A'));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(5));
}

TEST(ft_isalnum, return_0_when_is_not_num)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum('~'));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(' '));
}
