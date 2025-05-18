#include "../warmup2/stringBits.c"
#include "include/minunit.h"

MU_TEST(test_stringBits_hello) {
  mu_assert_string_eq("Hlo", stringBits("Hello"));
}

MU_TEST(test_stringBits_original_example) {
  // Ejemplo del enunciado: "Heeololeo" → "Hello"
  mu_assert_string_eq("Hello", stringBits("Heeololeo"));
}

MU_TEST(test_stringBits_hi) {
  mu_assert_string_eq("H", stringBits("Hi"));
}

MU_TEST(test_stringBits_empty) {
  mu_assert_string_eq("", stringBits(""));
}

MU_TEST(test_stringBits_single) {
  mu_assert_string_eq("A", stringBits("A"));
}

MU_TEST(test_stringBits_even_length) {
  // "abcd" → "ac"
  mu_assert_string_eq("ac", stringBits("abcd"));
}

MU_TEST(test_stringBits_numeric) {
  // "0123456789" → "02468"
  mu_assert_string_eq("02468", stringBits("0123456789"));
}

MU_TEST(test_stringBits_special_chars) {
  // "a!b@c" → "abc"
  mu_assert_string_eq("abc", stringBits("a!b@c"));
}

MU_TEST(test_stringBits_long) {
  // "ABCDEFGHIJKLMNOP" → "ACEGIKMO"
  mu_assert_string_eq("ACEGIKMO", stringBits("ABCDEFGHIJKLMNOP"));
}

MU_TEST(test_stringBits_odd_length) {
  // Cadena impar (>1): "abcde" → "ace"
  mu_assert_string_eq("ace", stringBits("abcde"));
}

MU_TEST_SUITE(suite) {
  MU_RUN_TEST(test_stringBits_hello);
  MU_RUN_TEST(test_stringBits_original_example);
  MU_RUN_TEST(test_stringBits_hi);
  MU_RUN_TEST(test_stringBits_empty);
  MU_RUN_TEST(test_stringBits_single);
  MU_RUN_TEST(test_stringBits_even_length);
  MU_RUN_TEST(test_stringBits_numeric);
  MU_RUN_TEST(test_stringBits_special_chars);
  MU_RUN_TEST(test_stringBits_long);
  MU_RUN_TEST(test_stringBits_odd_length);
}

int main(void) {
  MU_RUN_SUITE(suite);
  MU_REPORT();
  return MU_EXIT_CODE;
}
