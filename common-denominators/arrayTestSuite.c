#include <criterion/criterion.h>
#include "test.h"

Test (none, non_emtpy_integer_array_to_string)
{
  int arr[4] = {1, 2, 3, 4};
  char *actual = array_to_string(arr, 4, 4);
  char *expected = "{1, 2, 3, 4}";

  cr_assert_str_eq(actual, expected, "Expected %s actual %s.", expected, actual);
}

Test (none, empty_integer_array_to_string)
{
  int arr[0] = {};
  char *actual = array_to_string(arr, 0, 0);
  char *expected = "{}";

  cr_assert_str_eq(actual, expected, "Expected %s actual %s.", expected, actual);
}

Test (none, single_element_integer_array_to_string)
{
  int arr[1] = {1234};
  char *actual = array_to_string(arr, 1, 4);
  char *expected = "{1234}";

  cr_assert_str_eq(actual, expected, "Expected %s actual %s.", expected, actual);
}

Test (none, equal_arrays)
{
    int a[3] = {1, 2, 4};
    int b[3] = {1, 2, 3};

    cr_assert(compare_integer_arrays(a, b, 3), "Expected {1, 2, 3} actual %s",
              array_to_string(a, 3, 3));
}

Test (none, not_equal_arrays)
{
  int a[3] = {1, 2, 3};
  int b[3] = {1, 6, 3};

  cr_assert_not(compare_integer_arrays(a, b, 3));
}

Test (none, equal_2d_arrays)
{
  int a[4][2] = {{1, 1}, {2, 1}, {3, 1}, {4, 1}};
  int b[4][2] = {{1, 1}, {2, 1}, {3, 1}, {4, 1}};

  cr_assert(compare_integer_2d_arrays((int *)a, (int *)b, 4));
}

Test (none, not_equal_2d_arrays)
{
  int a[4][2] = {{1, 1}, {2, 1}, {3, 1}, {4, 1}};
  int b[4][2] = {{1, 1}, {2, 1}, {6, 1}, {4, 1}};

  cr_assert_not(compare_integer_2d_arrays((int *)a, (int *)b, 4));
}
