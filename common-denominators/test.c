#include <criterion/criterion.h>
#include <stdio.h>
#include <stdlib.h>

int compare_integer_arrays(const int *a, const int *b, size_t n)
{
  int eq = 1;
  while (n-- && eq)
    eq = (*(a + n) == *(b + n)) ? 1 : 0;

  return eq;
}

int compare2dArrays(const int **a, const int **b, size_t n)
{

}

Test (none, equal_arrays)
{
    int a[3] = {1, 2, 3};
    int b[3] = {1, 2, 3};

    cr_assert(compare_integer_arrays(a, b, 3));
}

Test (none, not_equal_arrays)
{
  int a[3] = {1, 2, 3};
  int b[3] = {1, 6, 3};

  cr_assert_not(compare_integer_arrays(a, b, 3));
}

Test ()

/* Test (none, equal_2d_arrays) */
/* { */
/*   int a[4][2] = {{1, 1}, {2, 1}, {3, 1}, {4, 1}}; */
/*   int b[4][2] = {{1, 1}, {2, 1}, {3, 1}, {4, 1}}; */
/* } */

/* Test (none, same_denomitator) */
/* { */
/*   long long fracs[4][2] = {{1, 1}, {2, 1}, {3, 1}, {4, 1}}; */
/*   long long common_fracs[4][2] = convertFracs(fracs, common_fracs); */

/*   cr_assert_ */
/* } */
