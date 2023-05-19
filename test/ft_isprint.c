#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_isprint);

TEST_SETUP(ft_isprint)
{
}

TEST_TEAR_DOWN(ft_isprint)
{
}

TEST(ft_isprint, return_1_when_is_printable)
{
	TEST_ASSERT_EQUAL_INT(ft_isprint(32), 1);
}

TEST(ft_isprint, return_0_when_is_not_printable)
{
	TEST_ASSERT_EQUAL_INT(ft_isprint(31), 0);
	TEST_ASSERT_EQUAL_INT(ft_isprint(127), 0);
}