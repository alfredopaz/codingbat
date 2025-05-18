#include "../warmup2/has271.c"
#include "include/minunit.h"

MU_TEST(test_has271_empty) {
  int nums[] = {};
  mu_assert_int_eq(0, has271(nums, 0));
}

MU_TEST(test_has271_short) {
  int nums[] = {2, 7};
  mu_assert_int_eq(0, has271(nums, 2));
}

MU_TEST(test_has271_exact_start) {
  int nums[] = {2, 7, 1};
  mu_assert_int_eq(1, has271(nums, 3));
}

MU_TEST(test_has271_exact_middle) {
  int nums[] = {1, 2, 7, 1, 4};
  mu_assert_int_eq(1, has271(nums, 5));
}

MU_TEST(test_has271_different_value) {
  int nums[] = {3, 8, 2};
  mu_assert_int_eq(1, has271(nums, 3));
}

MU_TEST(test_has271_third_mismatch) {
  int nums[] = {3, 8, 1};
  mu_assert_int_eq(0, has271(nums, 3));
}

MU_TEST(test_has271_overlapping) {
  int nums[] = {2, 7, 1, 2, 7, 1};
  mu_assert_int_eq(1, has271(nums, 6));
}

MU_TEST(test_has271_late_match) {
  int nums[] = {0, 5, -1, 2, 7, 1};
  mu_assert_int_eq(1, has271(nums, 6));
}

MU_TEST(test_has271_no_match) {
  int nums[] = {1, 2, 3, 5, 6, 7};
  mu_assert_int_eq(0, has271(nums, 6));
}

MU_TEST_SUITE(suite) {
  MU_RUN_TEST(test_has271_empty);
  MU_RUN_TEST(test_has271_short);
  MU_RUN_TEST(test_has271_exact_start);
  MU_RUN_TEST(test_has271_exact_middle);
  MU_RUN_TEST(test_has271_different_value);
  MU_RUN_TEST(test_has271_third_mismatch);
  MU_RUN_TEST(test_has271_overlapping);
  MU_RUN_TEST(test_has271_late_match);
  MU_RUN_TEST(test_has271_no_match);
}

int main(void) {
  MU_RUN_SUITE(suite);
  MU_REPORT();
  return MU_EXIT_CODE;
}
