#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <string.h>

TEST_GROUP(ft_memset);

TEST_SETUP(ft_memset)
{
}

TEST_TEAR_DOWN(ft_memset)
{
}

TEST(ft_memset, if_original_and_ft_string_is_equal)
{
	char teste[] = "testando";
	int i = 0;
	
	ft_memset(teste + 3, '.', 3 );
	
	while (*(teste + i))
	{
		printf("%c", *(teste + i));
		i++;
	}
	printf("\n");
	char teste2[] = "testando";
	memset(teste2 + 3, '.', 3 );
	i = 0;
	while (*(teste2 + i))
	{
		printf("%c", *(teste2 + i));
		i++;
	}

	TEST_ASSERT_EQUAL_STRING(teste, teste2);
}
