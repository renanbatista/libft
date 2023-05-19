#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <bsd/string.h>

TEST_GROUP(ft_strlcat);

TEST_SETUP(ft_strlcat)
{
}

TEST_TEAR_DOWN(ft_strlcat)
{
}

TEST(ft_strlcat, if_string_is_concated)
{
	char	teste[] = "testando";
	char	dest[10] = "aloha";
	char	teste2[] = "testando";
	char	dest2[10] = "aloha";

	TEST_ASSERT_EQUAL_INT(strlcat(dest2, teste2, 4), ft_strlcat(dest, teste, 4));
}
