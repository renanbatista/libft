#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <stdlib.h>

TEST_GROUP(ft_itoa);

TEST_SETUP(ft_itoa)
{
}

TEST_TEAR_DOWN(ft_itoa)
{
}

TEST(ft_itoa, convert_int_to_string)
{
	char number[] = "-222548";
	TEST_ASSERT_EQUAL_INT(itoa(number), ft_itoa(number));
}
