#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <string.h>

TEST_GROUP(ft_memchr);

TEST_SETUP(ft_memchr)
{
}

TEST_TEAR_DOWN(ft_memchr)
{
}

TEST(ft_memchr, search_for_first_ocorrence_of_char)
{
	const char text[] = "ola mundo";
	TEST_ASSERT_EQUAL_STRING(memchr(text, 'm', 7), ft_memchr(text, 'm', 7));
}
