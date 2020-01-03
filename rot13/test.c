#include <criterion/criterion.h>
#include "rot.h"

Test (empty, four_letter_string)
{
  char *s1 = rot13("test");
  char *s2 = "grfg";

  cr_assert_str_eq(s1, s2, "Actual '%s' expected '%s'", s1, s2);
}
