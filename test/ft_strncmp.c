#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <string.h>

TEST_GROUP(ft_strncmp);

TEST_SETUP(ft_strncmp)
{
}

TEST_TEAR_DOWN(ft_strncmp)
{
}

TEST(ft_strncmp, compare_strings_return_diff)
{
	const char text[] = "la mundo, nova era";
	const char text2[] = "la";
	TEST_ASSERT_EQUAL_INT(strncmp(text, text2, 2), ft_strncmp(text, text2, 2));
}
