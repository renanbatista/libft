#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <stdlib.h>

TEST_GROUP(ft_split);

TEST_SETUP(ft_split)
{
}

TEST_TEAR_DOWN(ft_split)
{
}

TEST(ft_split, split_string_with_separator)
{
	char teste[] = "321ola321";
	char set[] = "123";
	
	TEST_ASSERT_EQUAL_STRING("", ft_split(teste, set));
}
