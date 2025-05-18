#include "../warmup2/arrayFront9.c"
#include "include/minunit.h"

MU_TEST(test_arrayFront9_empty) {
  int nums[] = {};
  mu_assert_int_eq(0, arrayFront9(nums, 0));
}

MU_TEST(test_arrayFront9_one_element_not_9) {
  int nums[] = {1};
  mu_assert_int_eq(0, arrayFront9(nums, 1));
}

MU_TEST(test_arrayFront9_one_element_9) {
  int nums[] = {9};
  mu_assert_int_eq(1, arrayFront9(nums, 1));
}

MU_TEST(test_arrayFront9_nine_in_first_four) {
  int nums[] = {1, 2, 9, 3, 4};
  mu_assert_int_eq(1, arrayFront9(nums, 5));
}

MU_TEST(test_arrayFront9_nine_at_index3) {
  int nums[] = {1, 2, 3, 9, 5};
  mu_assert_int_eq(1, arrayFront9(nums, 5));
}

MU_TEST(test_arrayFront9_nine_beyond_first_four) {
  int nums[] = {1, 2, 3, 4, 9};
  mu_assert_int_eq(0, arrayFront9(nums, 5));
}

MU_TEST(test_arrayFront9_all_non9) {
  int nums[] = {1, 2, 3, 4};
  mu_assert_int_eq(0, arrayFront9(nums, 4));
}

MU_TEST(test_arrayFront9_all_nines) {
  // Caso donde todos los elementos son 9
  int nums[] = {9, 9, 9, 9, 9};
  mu_assert_int_eq(1, arrayFront9(nums, 5));
}

MU_TEST_SUITE(suite) {
  MU_RUN_TEST(test_arrayFront9_empty);
  MU_RUN_TEST(test_arrayFront9_one_element_not_9);
  MU_RUN_TEST(test_arrayFront9_one_element_9);
  MU_RUN_TEST(test_arrayFront9_nine_in_first_four);
  MU_RUN_TEST(test_arrayFront9_nine_at_index3);
  MU_RUN_TEST(test_arrayFront9_nine_beyond_first_four);
  MU_RUN_TEST(test_arrayFront9_all_non9);
  MU_RUN_TEST(test_arrayFront9_all_nines);
}

int main(void) {
  MU_RUN_SUITE(suite);
  MU_REPORT();
  return MU_EXIT_CODE;
}
