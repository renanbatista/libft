#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <string.h>

TEST_GROUP(ft_memcpy);

TEST_SETUP(ft_memcpy)
{
}

TEST_TEAR_DOWN(ft_memcpy)
{
}

TEST(ft_memcpy, if_original_and_ft_string_is_equal)
{
	char	teste[] = "testando";
	char	dest[3] = "";
	
	ft_memcpy(dest, teste, 3);

	char	teste2[] = "testando";
	char	dest2[3] = "";
	memcpy(dest2, teste2, 3);
	
	TEST_ASSERT_EQUAL_STRING(teste, teste2);
}
