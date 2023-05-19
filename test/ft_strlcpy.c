#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <bsd/string.h>

TEST_GROUP(ft_strlcpy);

TEST_SETUP(ft_strlcpy)
{
}

TEST_TEAR_DOWN(ft_strlcpy)
{
}

TEST(ft_strlcpy, if_original_and_ft_string_is_equal)
{
	char	teste[] = "testando";
	char	dest[3] = "";
	char	teste2[] = "testando";
	char	dest2[3] = "";

	TEST_ASSERT_EQUAL_INT(strlcpy(dest2, teste2, 3), ft_strlcpy(dest, teste, 3));
}
