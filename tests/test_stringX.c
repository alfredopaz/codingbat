#include "../warmup2/stringX.c"
#include "include/minunit.h"

MU_TEST(test_stringX_empty) {
  mu_assert_string_eq("", stringX(""));
}

MU_TEST(test_stringX_no_x) {
  mu_assert_string_eq("abcd", stringX("abcd"));
}

MU_TEST(test_stringX_beginning) {
  mu_assert_string_eq("abc", stringX("xabc"));
}

MU_TEST(test_stringX_end) {
  mu_assert_string_eq("abc", stringX("abcx"));
}

MU_TEST(test_stringX_example) {
  // Ejemplo original: "xabxxxcd" → "abcd"
  mu_assert_string_eq("abcd", stringX("xabxxxcd"));
}

MU_TEST(test_stringX_all_x) {
  mu_assert_string_eq("", stringX("xxxx"));
}

MU_TEST(test_stringX_mixed) {
  // Mezcla de x intercaladas
  mu_assert_string_eq("hello", stringX("hxexlxlxox"));
}

MU_TEST(test_stringX_case_sensitive) {
  // Asegura que solo se eliminan las 'x' minúsculas,
  // las 'X' mayúsculas permanecen
  mu_assert_string_eq("XX", stringX("xxXxXx"));
}

MU_TEST_SUITE(suite) {
  MU_RUN_TEST(test_stringX_empty);
  MU_RUN_TEST(test_stringX_no_x);
  MU_RUN_TEST(test_stringX_beginning);
  MU_RUN_TEST(test_stringX_end);
  MU_RUN_TEST(test_stringX_example);
  MU_RUN_TEST(test_stringX_all_x);
  MU_RUN_TEST(test_stringX_mixed);
  MU_RUN_TEST(test_stringX_case_sensitive);
}

int main(void) {
  MU_RUN_SUITE(suite);
  MU_REPORT();
  return MU_EXIT_CODE;
}
