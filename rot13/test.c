#include <criterion/criterion.h>
#include "rot.h"

Test (none, only_lowercase_letters)
{
  char *s1 = rot13("test");
  char *s2 = "grfg";

  cr_assert_str_eq(s1, s2, "Actual '%s' expected '%s'", s1, s2);
}

Test (none, only_uppercase_letters)
{

  char *s1 = rot13("TEST");
  char *s2 = "GRFG";

  cr_assert_str_eq(s1, s2, "Actual '%s' expected '%s'", s1, s2);
}

Test (none, special_characters)
{
  char *s1 = rot13("+=_-/");
  char *s2 = "+=_-/";

  cr_assert_str_eq(s1, s2, "Actual '%s' expected '%s'", s1, s2);
}

Test (none, only_numbers)
{
  char *s1 = rot13("12345");
  char *s2 = "12345";

  cr_assert_str_eq(s1, s2, "Actual '%s' expected '%s'", s1, s2);
}

Test (none, empty_string)
{
  cr_assert_str_eq(rot13(""), "");
}
