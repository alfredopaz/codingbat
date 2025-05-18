#include "../warmup2/arrayCount9.c"
#include "include/minunit.h"

MU_TEST(test_arrayCount9_empty) {
  int nums[] = {};
  mu_assert_int_eq(0, arrayCount9(nums, 0));
}

MU_TEST(test_arrayCount9_no_nines) {
  int nums[] = {1, 2, 3, 4, 5};
  mu_assert_int_eq(0, arrayCount9(nums, 5));
}

MU_TEST(test_arrayCount9_single_nine) {
  int nums[] = {9};
  mu_assert_int_eq(1, arrayCount9(nums, 1));
}

MU_TEST(test_arrayCount9_multiple_nines) {
  int nums[] = {1, 9, 9, 3, 9};
  mu_assert_int_eq(3, arrayCount9(nums, 5));
}

MU_TEST(test_arrayCount9_all_nines) {
  int nums[] = {9, 9, 9, 9};
  mu_assert_int_eq(4, arrayCount9(nums, 4));
}

MU_TEST(test_arrayCount9_nines_at_ends) {
  int nums[] = {9, 1, 2, 3, 9};
  mu_assert_int_eq(2, arrayCount9(nums, 5));
}

MU_TEST(test_arrayCount9_negative_values) {
  int nums[] = {9, -9, 9, 0};
  mu_assert_int_eq(2, arrayCount9(nums, 4));
}

MU_TEST_SUITE(suite) {
  MU_RUN_TEST(test_arrayCount9_empty);
  MU_RUN_TEST(test_arrayCount9_no_nines);
  MU_RUN_TEST(test_arrayCount9_single_nine);
  MU_RUN_TEST(test_arrayCount9_multiple_nines);
  MU_RUN_TEST(test_arrayCount9_all_nines);
  MU_RUN_TEST(test_arrayCount9_nines_at_ends);
  MU_RUN_TEST(test_arrayCount9_negative_values);
}

int main(void) {
  MU_RUN_SUITE(suite);
  MU_REPORT();
  return MU_EXIT_CODE;
}
