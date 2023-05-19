#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <string.h>

TEST_GROUP(ft_memmove);

TEST_SETUP(ft_memmove)
{
}

TEST_TEAR_DOWN(ft_memmove)
{
}

TEST(ft_memmove, if_original_and_ft_string_is_equal)
{
	char	teste[] = "testando";
	char	teste_dest[] = "testando";
	char	dest[3] = "";
	
	ft_memmove(dest, teste, 3);

	char	teste2[] = "testando";
	char	dest2[3] = "";
	memmove(dest2, teste2, 3);

	TEST_ASSERT_EQUAL_STRING(teste_dest, teste2);
}
