#include "../warmup2/noTriples.c"
#include "include/minunit.h"

MU_TEST(test_noTriples_empty) {
  int nums[] = {};
  mu_assert_int_eq(1, noTriples(nums, 0));
}

MU_TEST(test_noTriples_len1) {
  int nums[] = {7};
  mu_assert_int_eq(1, noTriples(nums, 1));
}

MU_TEST(test_noTriples_len2) {
  int nums[] = {7, 7};
  mu_assert_int_eq(1, noTriples(nums, 2));
}

MU_TEST(test_noTriples_no_triples) {
  int nums[] = {1, 2, 1, 2, 1, 2};
  mu_assert_int_eq(1, noTriples(nums, 6));
}

MU_TEST(test_noTriples_adjacent_doubles) {
  int nums[] = {3, 3, 4, 4, 5, 5};
  mu_assert_int_eq(1, noTriples(nums, 6));
}

MU_TEST(test_noTriples_triples_start) {
  int nums[] = {5, 5, 5, 2, 2};
  mu_assert_int_eq(0, noTriples(nums, 5));
}

MU_TEST(test_noTriples_triples_middle) {
  int nums[] = {1, 2, 2, 2, 3};
  mu_assert_int_eq(0, noTriples(nums, 5));
}

MU_TEST(test_noTriples_triples_end) {
  int nums[] = {1, 1, 2, 3, 3, 3};
  mu_assert_int_eq(0, noTriples(nums, 6));
}

MU_TEST(test_noTriples_multiple_triples) {
  int nums[] = {2, 2, 2, 3, 3, 3, 4};
  mu_assert_int_eq(0, noTriples(nums, 7));
}

MU_TEST_SUITE(suite) {
  MU_RUN_TEST(test_noTriples_empty);
  MU_RUN_TEST(test_noTriples_len1);
  MU_RUN_TEST(test_noTriples_len2);
  MU_RUN_TEST(test_noTriples_no_triples);
  MU_RUN_TEST(test_noTriples_adjacent_doubles);
  MU_RUN_TEST(test_noTriples_triples_start);
  MU_RUN_TEST(test_noTriples_triples_middle);
  MU_RUN_TEST(test_noTriples_triples_end);
  MU_RUN_TEST(test_noTriples_multiple_triples);
}

int main(void) {
  MU_RUN_SUITE(suite);
  MU_REPORT();
  return MU_EXIT_CODE;
}
