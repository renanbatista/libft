#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <string.h>

TEST_GROUP(ft_bzero);

TEST_SETUP(ft_bzero)
{
}

TEST_TEAR_DOWN(ft_bzero)
{
}

TEST(ft_bzero, null_is_in_n_characters_of_memory)
{
	char	teste[] = "testando";
	char	teste2[] = "testando";
	
	ft_bzero(teste, 3);
	bzero(teste2, 3);
	TEST_ASSERT_EQUAL_STRING(teste, teste2);
}