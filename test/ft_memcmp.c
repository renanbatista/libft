#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <string.h>

TEST_GROUP(ft_memcmp);

TEST_SETUP(ft_memcmp)
{
}

TEST_TEAR_DOWN(ft_memcmp)
{
}

TEST(ft_memcmp, compare_two_end_of_memorys)
{
	char text[] = "ola mundo";
	char text2[] = "ola nundo";
	TEST_ASSERT_EQUAL_INT(memcmp(text, text2, 3), ft_memcmp(text, text2, 3));
}
