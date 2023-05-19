#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_isdigit);

TEST_SETUP(ft_isdigit)
{
}

TEST_TEAR_DOWN(ft_isdigit)
{
}


TEST(ft_isdigit, return_1_when_is_digit)
{
	TEST_ASSERT_EQUAL_INT(ft_isdigit(1), 1);
	TEST_ASSERT_EQUAL_INT(ft_isdigit(5), 1);
}

TEST(ft_isdigit, return_0_when_is_not_digit)
{
	TEST_ASSERT_EQUAL_INT(ft_isdigit('*'), 0);
	TEST_ASSERT_EQUAL_INT(ft_isdigit('\n'), 0);
}