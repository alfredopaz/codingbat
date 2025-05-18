#include "../warmup2/stringSplosion.c"
#include "include/minunit.h"

MU_TEST(test_stringSplosion_empty) {
  // Cadena vacía
  mu_assert_string_eq("", stringSplosion(""));
}

MU_TEST(test_stringSplosion_code) {
  // "Code" → "CCoCodCode"
  mu_assert_string_eq("CCoCodCode", stringSplosion("Code"));
}

MU_TEST(test_stringSplosion_abc) {
  // "abc" → "aababc"
  mu_assert_string_eq("aababc", stringSplosion("abc"));
}

MU_TEST(test_stringSplosion_ab) {
  // "ab" → "aab"
  mu_assert_string_eq("aab", stringSplosion("ab"));
}

MU_TEST(test_stringSplosion_x) {
  // Cadena de longitud 1
  mu_assert_string_eq("x", stringSplosion("x"));
}

MU_TEST(test_stringSplosion_dog) {
  // "dog" → "ddodog"
  mu_assert_string_eq("ddodog", stringSplosion("dog"));
}

MU_TEST(test_stringSplosion_hello) {
  // "Hello" → "HHeHelHellHello"
  mu_assert_string_eq("HHeHelHellHello", stringSplosion("Hello"));
}

MU_TEST_SUITE(suite) {
  MU_RUN_TEST(test_stringSplosion_empty);
  MU_RUN_TEST(test_stringSplosion_code);
  MU_RUN_TEST(test_stringSplosion_abc);
  MU_RUN_TEST(test_stringSplosion_ab);
  MU_RUN_TEST(test_stringSplosion_x);
  MU_RUN_TEST(test_stringSplosion_dog);
  MU_RUN_TEST(test_stringSplosion_hello);
}

int main(void) {
  MU_RUN_SUITE(suite);
  MU_REPORT();
  return MU_EXIT_CODE;
}

