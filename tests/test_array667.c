#include "../warmup2/array667.c"
#include "include/minunit.h"

MU_TEST(test_array667_empty) {
  int nums[] = {};
  mu_assert_int_eq(0, array667(nums, 0));
}

MU_TEST(test_array667_single) {
  int nums[] = {6};
  mu_assert_int_eq(0, array667(nums, 1));
}

MU_TEST(test_array667_two_sixes) {
  int nums[] = {6, 6};
  mu_assert_int_eq(1, array667(nums, 2));
}

MU_TEST(test_array667_six_seven) {
  int nums[] = {6, 7};
  mu_assert_int_eq(1, array667(nums, 2));
}

MU_TEST(test_array667_six_eight) {
  int nums[] = {6, 8};
  mu_assert_int_eq(0, array667(nums, 2));
}

MU_TEST(test_array667_multiple_sixes) {
  int nums[] = {6, 6, 6};
  mu_assert_int_eq(2, array667(nums, 3));
}

MU_TEST(test_array667_mixed) {
  int nums[] = {6, 7, 6, 6, 7};
  mu_assert_int_eq(3, array667(nums, 5));
}

MU_TEST(test_array667_seven_six) {
  int nums[] = {7, 6};
  mu_assert_int_eq(0, array667(nums, 2));
}

MU_TEST(test_array667_seven_six_seven) {
  int nums[] = {7, 6, 7};
  mu_assert_int_eq(1, array667(nums, 3));
}

MU_TEST_SUITE(suite) {
  MU_RUN_TEST(test_array667_empty);
  MU_RUN_TEST(test_array667_single);
  MU_RUN_TEST(test_array667_two_sixes);
  MU_RUN_TEST(test_array667_six_seven);
  MU_RUN_TEST(test_array667_six_eight);
  MU_RUN_TEST(test_array667_multiple_sixes);
  MU_RUN_TEST(test_array667_mixed);
  MU_RUN_TEST(test_array667_seven_six);
  MU_RUN_TEST(test_array667_seven_six_seven);
}

int main(void) {
  MU_RUN_SUITE(suite);
  MU_REPORT();
  return MU_EXIT_CODE;
}
