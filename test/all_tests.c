#include "unity_fixture.h"

TEST_GROUP_RUNNER(ft_bzero)
{
	RUN_TEST_CASE(ft_bzero, null_is_in_n_characters_of_memory);
}

TEST_GROUP_RUNNER(ft_calloc)
{
	RUN_TEST_CASE(ft_calloc, allocate_a_pointer_10_5);
}

TEST_GROUP_RUNNER(ft_isalnum)
{
	RUN_TEST_CASE(ft_isalnum, return_1_when_is_num);
	RUN_TEST_CASE(ft_isalnum, return_0_when_is_not_num);
}

TEST_GROUP_RUNNER(ft_isalpha)
{
	RUN_TEST_CASE(ft_isalpha, return_1_when_is_alpha);
	RUN_TEST_CASE(ft_isalpha, return_0_when_is_not_alpha);
}

TEST_GROUP_RUNNER(ft_isascii)
{
	RUN_TEST_CASE(ft_isascii, return_1_when_is_ascii);
	RUN_TEST_CASE(ft_isascii, return_0_when_is_not_ascii);
}

TEST_GROUP_RUNNER(ft_isdigit)
{
	RUN_TEST_CASE(ft_isdigit, return_1_when_is_digit);
	RUN_TEST_CASE(ft_isdigit, return_0_when_is_not_digit);
}

TEST_GROUP_RUNNER(ft_isprint)
{
	RUN_TEST_CASE(ft_isprint, return_1_when_is_printable);
	RUN_TEST_CASE(ft_isprint, return_0_when_is_not_printable);
}

// TEST_GROUP_RUNNER(ft_memchr)
// {
// 	RUN_TEST_CASE(ft_memchr, should_return_pointer_when_str_has_char);
// 	RUN_TEST_CASE(ft_memchr, should_return_null_when_str_not_has_char);
// }

TEST_GROUP_RUNNER(ft_strdup)
{
	RUN_TEST_CASE(ft_strdup, should_test_all_possibilities_of_returns);
}

TEST_GROUP_RUNNER(ft_strnstr)
{
	RUN_TEST_CASE(ft_strnstr, locate_substr_in_a_string_and_return_position);
}

TEST_GROUP_RUNNER(ft_strlen)
{
	RUN_TEST_CASE(ft_strlen, return_correct_string_lenght);
}

TEST_GROUP_RUNNER(ft_memset)
{
	RUN_TEST_CASE(ft_memset, if_original_and_ft_string_is_equal);
}

TEST_GROUP_RUNNER(ft_memcpy)
{
	RUN_TEST_CASE(ft_memcpy, if_original_and_ft_string_is_equal);
}

TEST_GROUP_RUNNER(ft_memmove)
{
	RUN_TEST_CASE(ft_memmove, if_original_and_ft_string_is_equal);
}

TEST_GROUP_RUNNER(ft_strlcpy)
{
	RUN_TEST_CASE(ft_strlcpy, if_original_and_ft_string_is_equal);
}

TEST_GROUP_RUNNER(ft_strlcat)
{
	RUN_TEST_CASE(ft_strlcat, if_string_is_concated);
}

TEST_GROUP_RUNNER(ft_toupper)
{
	RUN_TEST_CASE(ft_toupper, int_change_for_upper_letter);
}

TEST_GROUP_RUNNER(ft_tolower)
{
	RUN_TEST_CASE(ft_tolower, int_change_for_lower_letter);
}

TEST_GROUP_RUNNER(ft_strchr)
{
	RUN_TEST_CASE(ft_strchr, return_position_of_the_first_finded_caracter_or_null);
}

TEST_GROUP_RUNNER(ft_strrchr)
{
	RUN_TEST_CASE(ft_strrchr, return_position_of_the_last_finded_caracter_or_null);
}

TEST_GROUP_RUNNER(ft_strncmp)
{
	RUN_TEST_CASE(ft_strncmp, compare_strings_return_diff);
}

TEST_GROUP_RUNNER(ft_memchr)
{
	RUN_TEST_CASE(ft_memchr, search_for_first_ocorrence_of_char);
}

TEST_GROUP_RUNNER(ft_memcmp)
{
	RUN_TEST_CASE(ft_memcmp, compare_two_end_of_memorys);
}

TEST_GROUP_RUNNER(ft_atoi)
{
	RUN_TEST_CASE(ft_atoi, convert_string_to_integer);
}

TEST_GROUP_RUNNER(ft_strjoin)
{
	RUN_TEST_CASE(ft_strjoin, search_for_str_in_start_return_len);
}

TEST_GROUP_RUNNER(ft_substr)
{
	RUN_TEST_CASE(ft_substr, extract_substring);
}

TEST_GROUP_RUNNER(ft_strtrim)
{
	RUN_TEST_CASE(ft_strtrim, remove_caracter_set_to_start_and_end_of_string);
}

TEST_GROUP_RUNNER(ft_split)
{
	RUN_TEST_CASE(ft_split, split_string_with_separator);
}

TEST_GROUP_RUNNER(ft_itoa)
{
	RUN_TEST_CASE(ft_itoa, convert_int_to_string);
}

TEST_GROUP_RUNNER(ft_strmapi)
{
	RUN_TEST_CASE(ft_strmapi, execute_funcition_in_a_new_string);
}

TEST_GROUP_RUNNER(ft_striteri)
{
	RUN_TEST_CASE(ft_striteri, execute_funcition_in_a_string);
}

TEST_GROUP_RUNNER(ft_putchar_fd)
{
	RUN_TEST_CASE(ft_putchar_fd, print_char_with_fd);
}

TEST_GROUP_RUNNER(ft_putstr_fd)
{
	RUN_TEST_CASE(ft_putstr_fd, print_string_with_fd);
}

TEST_GROUP_RUNNER(ft_putendl_fd)
{
	RUN_TEST_CASE(ft_putendl_fd, print_string_with_fd_and_newline);
}

TEST_GROUP_RUNNER(ft_putnbr_fd)
{
	RUN_TEST_CASE(ft_putnbr_fd, print_string_with_fd_and_newline);
}

static void	run_all_tests(void)
{
	RUN_TEST_GROUP(ft_bzero);
	RUN_TEST_GROUP(ft_calloc);
	RUN_TEST_GROUP(ft_isalnum);
	RUN_TEST_GROUP(ft_isalpha);
	RUN_TEST_GROUP(ft_isascii);
	RUN_TEST_GROUP(ft_isdigit);
	RUN_TEST_GROUP(ft_isprint);
	RUN_TEST_GROUP(ft_memcpy);
	RUN_TEST_GROUP(ft_memset);
	RUN_TEST_GROUP(ft_strdup);
	RUN_TEST_GROUP(ft_strnstr);
	RUN_TEST_GROUP(ft_strlen);
	RUN_TEST_GROUP(ft_memmove);
	RUN_TEST_GROUP(ft_strlcpy);
	RUN_TEST_GROUP(ft_strlcat);
	RUN_TEST_GROUP(ft_toupper);
	RUN_TEST_GROUP(ft_tolower);
	RUN_TEST_GROUP(ft_strchr);
	RUN_TEST_GROUP(ft_strrchr);
	RUN_TEST_GROUP(ft_strncmp);
	RUN_TEST_GROUP(ft_memchr);
	RUN_TEST_GROUP(ft_memcmp);
	RUN_TEST_GROUP(ft_atoi);
	RUN_TEST_GROUP(ft_substr);
	RUN_TEST_GROUP(ft_strjoin);
	RUN_TEST_GROUP(ft_strtrim);
	RUN_TEST_GROUP(ft_split);
	RUN_TEST_GROUP(ft_itoa);
	RUN_TEST_GROUP(ft_strmapi);
	RUN_TEST_GROUP(ft_striteri);
	RUN_TEST_GROUP(ft_putchar_fd);
	RUN_TEST_GROUP(ft_putendl_fd);
	RUN_TEST_GROUP(ft_putnbr_fd);
}

int	main(int argc, const char *argv[])
{
	return (UnityMain(argc, argv, run_all_tests));
}