#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <stdlib.h>

TEST_GROUP(ft_atoi);

TEST_SETUP(ft_atoi)
{
}

TEST_TEAR_DOWN(ft_atoi)
{
}

TEST(ft_atoi, convert_string_to_integer)
{
	char number[] = "-222548";
	TEST_ASSERT_EQUAL_INT(atoi(number), ft_atoi(number));
}
