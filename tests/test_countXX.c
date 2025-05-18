#include "../warmup2/countXX.c"
#include "include/minunit.h"

MU_TEST(test_countXX_no_x) {
  mu_assert_int_eq(0, countXX("abc"));
}

MU_TEST(test_countXX_one_pair) {
  mu_assert_int_eq(1, countXX("abcxx"));
}

MU_TEST(test_countXX_overlapping) {
  mu_assert_int_eq(2, countXX("xxx"));  // "xx" en 0–1 y 1–2
}

MU_TEST(test_countXX_multiple) {
  mu_assert_int_eq(3, countXX("xxxx")); // "xx" en 0–1, 1–2, 2–3
}

MU_TEST(test_countXX_empty) {
  mu_assert_int_eq(0, countXX(""));
}

MU_TEST(test_countXX_non_consecutive) {
  // "xx" en 0–1 y 5–6
  mu_assert_int_eq(2, countXX("xxabcxx"));
}

MU_TEST(test_countXX_mixed) {
  // "xx" en 0–1, 1–2, 2–3 (solapado), y 6–7
  mu_assert_int_eq(4, countXX("xxxxaaxx"));
}

MU_TEST_SUITE(suite) {
  MU_RUN_TEST(test_countXX_no_x);
  MU_RUN_TEST(test_countXX_one_pair);
  MU_RUN_TEST(test_countXX_overlapping);
  MU_RUN_TEST(test_countXX_multiple);
  MU_RUN_TEST(test_countXX_empty);
  MU_RUN_TEST(test_countXX_non_consecutive);
  MU_RUN_TEST(test_countXX_mixed);
}

int main(void) {
  MU_RUN_SUITE(suite);
  MU_REPORT();
  return MU_EXIT_CODE;
}
