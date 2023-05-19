#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <stdlib.h>

TEST_GROUP(ft_strdup);

TEST_SETUP(ft_strdup)
{
}

TEST_TEAR_DOWN(ft_strdup)
{
}

TEST(ft_strdup, should_test_all_possibilities_of_returns)
{
	char teste[] = "";
	TEST_ASSERT_EQUAL_STRING(strdup(teste), ft_strdup(teste));
}
