#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <ctype.h>

TEST_GROUP(ft_tolower);

TEST_SETUP(ft_tolower)
{
}

TEST_TEAR_DOWN(ft_tolower)
{
}

TEST(ft_tolower, int_change_for_lower_letter)
{
	int vector_lower_1[25];
	int vector_lower_2[25];
	int iniciASCII = 65;

	while(iniciASCII <= 90)
	{
		vector_lower_1[iniciASCII-65] = tolower(iniciASCII-65);
		vector_lower_2[iniciASCII-65] = ft_tolower(iniciASCII-65);
		iniciASCII++;
	}

	TEST_ASSERT_INT_ARRAY_WITHIN (0, vector_lower_1, vector_lower_2, 25);
}
