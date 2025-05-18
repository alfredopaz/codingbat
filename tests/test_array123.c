#include "../warmup2/array123.c"
#include "include/minunit.h"

MU_TEST(test_array123_empty) {
  int nums[] = {};
  mu_assert_int_eq(0, array123(nums, 0));
}

MU_TEST(test_array123_short) {
  int nums[] = {1, 2};
  mu_assert_int_eq(0, array123(nums, 2));
}

MU_TEST(test_array123_exact) {
  int nums[] = {1, 2, 3};
  mu_assert_int_eq(1, array123(nums, 3));
}

MU_TEST(test_array123_start) {
  int nums[] = {1, 2, 3, 4, 5};
  mu_assert_int_eq(1, array123(nums, 5));
}

MU_TEST(test_array123_mid) {
  int nums[] = {7, 1, 2, 3, 9};
  mu_assert_int_eq(1, array123(nums, 5));
}

MU_TEST(test_array123_end) {
  int nums[] = {0, 1, 2, 3};
  mu_assert_int_eq(1, array123(nums, 4));
}

MU_TEST(test_array123_false) {
  int nums[] = {1, 1, 2, 4, 3};
  mu_assert_int_eq(0, array123(nums, 5));
}

MU_TEST(test_array123_repeated) {
  int nums[] = {1, 1, 2, 3, 1, 2, 3};
  mu_assert_int_eq(1, array123(nums, 7));
}

MU_TEST(test_array123_overlapping) {
  int nums[] = {1, 2, 1, 2, 3};
  mu_assert_int_eq(1, array123(nums, 5));
}

MU_TEST_SUITE(suite) {
  MU_RUN_TEST(test_array123_empty);
  MU_RUN_TEST(test_array123_short);
  MU_RUN_TEST(test_array123_exact);
  MU_RUN_TEST(test_array123_start);
  MU_RUN_TEST(test_array123_mid);
  MU_RUN_TEST(test_array123_end);
  MU_RUN_TEST(test_array123_false);
  MU_RUN_TEST(test_array123_repeated);
  MU_RUN_TEST(test_array123_overlapping);
}

int main(void) {
  MU_RUN_SUITE(suite);
  MU_REPORT();
  return MU_EXIT_CODE;
}
