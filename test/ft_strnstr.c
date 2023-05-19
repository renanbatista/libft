#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <bsd/string.h>

TEST_GROUP(ft_strnstr);

TEST_SETUP(ft_strnstr)
{
}

TEST_TEAR_DOWN(ft_strnstr)
{
}

TEST(ft_strnstr, locate_substr_in_a_string_and_return_position)
{
	char text[] = "ola mundo, nova era";
	char text2[] = "la";
	TEST_ASSERT_EQUAL_STRING(strnstr(text, text2, 7), ft_strnstr(text, text2, 7));
}
