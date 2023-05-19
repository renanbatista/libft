#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <stdlib.h>

TEST_GROUP(ft_substr);

TEST_SETUP(ft_substr)
{
}

TEST_TEAR_DOWN(ft_substr)
{
}

TEST(ft_substr, extract_substring)
{
	char teste[] = "ola mundo";
	int	start = 4;
	int	len = 3;
	TEST_ASSERT_EQUAL_STRING("mun", ft_substr(teste, start, len));
}
