#include "../warmup2/stringTimes.c"
#include "include/minunit.h"

MU_TEST(test_stringTimes_hi2) {
  mu_assert_string_eq("HiHi", stringTimes("Hi", 2));
}

MU_TEST(test_stringTimes_hi0) {
  mu_assert_string_eq("", stringTimes("Hi", 0));
}

MU_TEST(test_stringTimes_empty_n3) {
  mu_assert_string_eq("", stringTimes("", 3));
}

MU_TEST(test_stringTimes_a5) {
  mu_assert_string_eq("aaaaa", stringTimes("a", 5));
}

MU_TEST(test_stringTimes_ab1) {
  mu_assert_string_eq("Ab", stringTimes("Ab", 1));
}

MU_TEST_SUITE(suite) {
  MU_RUN_TEST(test_stringTimes_hi2);
  MU_RUN_TEST(test_stringTimes_hi0);
  MU_RUN_TEST(test_stringTimes_empty_n3);
  MU_RUN_TEST(test_stringTimes_a5);
  MU_RUN_TEST(test_stringTimes_ab1);
}

int main(void) {
  MU_RUN_SUITE(suite);
  MU_REPORT();
  return MU_EXIT_CODE;
}
