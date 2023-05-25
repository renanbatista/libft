#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <stdlib.h>

TEST_GROUP(ft_strmapi);

TEST_SETUP(ft_strmapi)
{
}

TEST_TEAR_DOWN(ft_strmapi)
{
}

TEST(ft_strmapi, execute_funcition_in_a_new_string)
{
	char number[] = "-222548";
	TEST_ASSERT_EQUAL_INT(itoa(number), ft_strmapi(number));
}
