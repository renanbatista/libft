#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <stdlib.h>

TEST_GROUP(ft_strjoin);

TEST_SETUP(ft_strjoin)
{
}

TEST_TEAR_DOWN(ft_strjoin)
{
}

TEST(ft_strjoin, search_for_str_in_start_return_len)
{
	char teste[] = "ola";
	char teste2[] = " mundo";
	
	TEST_ASSERT_EQUAL_STRING("ola mundo", ft_strjoin(teste, teste2));
}
