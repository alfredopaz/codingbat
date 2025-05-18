#include "../warmup2/stringMatch.c"
#include "include/minunit.h"

MU_TEST(test_stringMatch_empty) {
  mu_assert_int_eq(0, stringMatch("", ""));
}

MU_TEST(test_stringMatch_one_short) {
  mu_assert_int_eq(0, stringMatch("a", "abc"));
}

MU_TEST(test_stringMatch_both_short) {
  mu_assert_int_eq(0, stringMatch("a", "b"));
}

MU_TEST(test_stringMatch_exact) {
  // "abc" vs "abc" → "ab", "bc" → 2
  mu_assert_int_eq(2, stringMatch("abc", "abc"));
}

MU_TEST(test_stringMatch_example) {
  // Ejemplo: "xxcaazz" vs "xxbaaz" → 3
  mu_assert_int_eq(3, stringMatch("xxcaazz", "xxbaaz"));
}

MU_TEST(test_stringMatch_no_match) {
  mu_assert_int_eq(0, stringMatch("abcdef", "ghijkl"));
}

MU_TEST(test_stringMatch_partial) {
  // "ababc" vs "abcab" → sólo "ab" en i=0
  mu_assert_int_eq(1, stringMatch("ababc", "abcab"));
}

MU_TEST(test_stringMatch_different_lengths) {
  // "hello" vs "he" → 1 ("he")
  mu_assert_int_eq(1, stringMatch("hello", "he"));
}

MU_TEST(test_stringMatch_overlapping) {
  // "aaaa" vs "aaab" → "aa","aa","aa" vs "aa","aa","ab" → primeras dos coinciden → 2
  mu_assert_int_eq(2, stringMatch("aaaa", "aaab"));
}

MU_TEST_SUITE(suite) {
  MU_RUN_TEST(test_stringMatch_empty);
  MU_RUN_TEST(test_stringMatch_one_short);
  MU_RUN_TEST(test_stringMatch_both_short);
  MU_RUN_TEST(test_stringMatch_exact);
  MU_RUN_TEST(test_stringMatch_example);
  MU_RUN_TEST(test_stringMatch_no_match);
  MU_RUN_TEST(test_stringMatch_partial);
  MU_RUN_TEST(test_stringMatch_different_lengths);
  MU_RUN_TEST(test_stringMatch_overlapping);
}

int main(void) {
  MU_RUN_SUITE(suite);
  MU_REPORT();
  return MU_EXIT_CODE;
}
