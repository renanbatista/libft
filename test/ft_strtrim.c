#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <stdlib.h>

TEST_GROUP(ft_strtrim);

TEST_SETUP(ft_strtrim)
{
}

TEST_TEAR_DOWN(ft_strtrim)
{
}

TEST(ft_strtrim, remove_caracter_set_to_start_and_end_of_string)
{
	char teste[] = "321ola321";
	char set[] = "123";
	
	TEST_ASSERT_EQUAL_STRING("ola", ft_strtrim(teste, set));
}
