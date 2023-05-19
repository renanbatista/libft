#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <stdlib.h>

TEST_GROUP(ft_calloc);

TEST_SETUP(ft_calloc)
{
}

TEST_TEAR_DOWN(ft_calloc)
{
}

TEST(ft_calloc, allocate_a_pointer_10_5)
{
	TEST_ASSERT_EQUAL_MEMORY(calloc(10, 5), ft_calloc(10, 5), 10);
}
