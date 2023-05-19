#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <ctype.h>

TEST_GROUP(ft_toupper);

TEST_SETUP(ft_toupper)
{
}

TEST_TEAR_DOWN(ft_toupper)
{
}

TEST(ft_toupper, int_change_for_upper_letter)
{
	int vector_lower_1[25];
	int vector_lower_2[25];
	int iniciASCII = 97;

	while(iniciASCII <= 122)
	{
		vector_lower_1[iniciASCII-97] = toupper(iniciASCII-97);
		vector_lower_2[iniciASCII-97] = ft_toupper(iniciASCII-97);
		iniciASCII++;
	}

	TEST_ASSERT_INT_ARRAY_WITHIN (0, vector_lower_1, vector_lower_2, 25);
}
