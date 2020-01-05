#include <criterion/criterion.h>
#include "maxsequence.h"

Test (none, empty_array)
{
  int arr[0] = { };
  int res = maxSequence(arr, 0);

  cr_assert_eq(res, 0);
}

Test (none, only_positive_integers)
{
  int arr[5] = {1, 2, 3, 4, 5};
  int res = maxSequence(arr, 5);

  cr_assert_eq(res, 15, "Given %d expected %d", res, 15);
}

Test (none, only_negative_integers)
{
  int arr[5] = {-1, -2, -3, -4, -5};
  int res = maxSequence(arr, 5);

  cr_assert_eq(res, 0, "Given %d expected %d", res, 0);
}

Test (none, negative_and_positive_numbers)
{
  int arr[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int res = maxSequence(arr, 9);

  cr_assert_eq(res, 6, "Given %d expected %d", res, 6);
}
