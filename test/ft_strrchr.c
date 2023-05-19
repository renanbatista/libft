#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <string.h>

TEST_GROUP(ft_strrchr);

TEST_SETUP(ft_strrchr)
{
}

TEST_TEAR_DOWN(ft_strrchr)
{
}

TEST(ft_strrchr, return_position_of_the_last_finded_caracter_or_null)
{
	const char text[] = "ola mundo";
	TEST_ASSERT_EQUAL_STRING(strrchr(text, 111), ft_strrchr(text, 111));
	TEST_ASSERT_EQUAL_STRING(strrchr(text, '\0'), ft_strrchr(text, '\0'));
}
