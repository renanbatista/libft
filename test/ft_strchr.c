#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <string.h>

TEST_GROUP(ft_strchr);

TEST_SETUP(ft_strchr)
{
}

TEST_TEAR_DOWN(ft_strchr)
{
}

TEST(ft_strchr, return_position_of_the_first_finded_caracter_or_null)
{
	const char text[] = "ola mundo";
	TEST_ASSERT_EQUAL_STRING(strchr(text, 109), ft_strchr(text, 109));
	TEST_ASSERT_EQUAL_STRING(strchr(text, '\0'), ft_strchr(text, '\0'));
}
