#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <stdlib.h>

TEST_GROUP(ft_striteri);

TEST_SETUP(ft_striteri)
{
}

TEST_TEAR_DOWN(ft_striteri)
{
}

TEST(ft_striteri, execute_funcition_in_a_string)
{
	char number[] = "-222548";
	TEST_ASSERT_EQUAL_INT(itoa(number), ft_itoa(number));
}
