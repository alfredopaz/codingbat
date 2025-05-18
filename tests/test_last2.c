#include "../warmup2/last2.c"
#include "include/minunit.h"

MU_TEST(test_last2_empty) {
  mu_assert_int_eq(0, last2(""));
}

MU_TEST(test_last2_one_char) {
  mu_assert_int_eq(0, last2("a"));
}

MU_TEST(test_last2_hixxhi) {
  mu_assert_int_eq(1, last2("hixxhi"));
}

MU_TEST(test_last2_xaxxaxaxx) {
  mu_assert_int_eq(1, last2("xaxxaxaxx"));
}

MU_TEST(test_last2_axxxaaxx) {
  mu_assert_int_eq(2, last2("axxxaaxx"));
}

MU_TEST(test_last2_xxxx) {
  mu_assert_int_eq(2, last2("xxxx"));
}

MU_TEST(test_last2_aaaaa) {
  mu_assert_int_eq(3, last2("aaaaa"));
}

MU_TEST(test_last2_aaxaa) {
  mu_assert_int_eq(1, last2("aaxaa"));
}

MU_TEST(test_last2_numeric) {
  mu_assert_int_eq(2, last2("121212"));
}

MU_TEST(test_last2_never) {
  // Caso sin apariciones: "abcdef" → 0
  mu_assert_int_eq(0, last2("abcdef"));
}

MU_TEST_SUITE(suite) {
  MU_RUN_TEST(test_last2_empty);
  MU_RUN_TEST(test_last2_one_char);
  MU_RUN_TEST(test_last2_hixxhi);
  MU_RUN_TEST(test_last2_xaxxaxaxx);
  MU_RUN_TEST(test_last2_axxxaaxx);
  MU_RUN_TEST(test_last2_xxxx);
  MU_RUN_TEST(test_last2_aaaaa);
  MU_RUN_TEST(test_last2_aaxaa);
  MU_RUN_TEST(test_last2_numeric);
  MU_RUN_TEST(test_last2_never);
}

int main(void) {
  MU_RUN_SUITE(suite);
  MU_REPORT();
  return MU_EXIT_CODE;
}
