#include "../warmup2/frontTimes.c"
#include "include/minunit.h"

MU_TEST(test_frontTimes_chocolate_2) {
  mu_assert_string_eq("ChoCho", frontTimes("Chocolate", 2));
}

MU_TEST(test_frontTimes_ab_3) {
  mu_assert_string_eq("AbAbAb", frontTimes("Ab", 3));
}

MU_TEST(test_frontTimes_a_4) {
  mu_assert_string_eq("aaaa", frontTimes("a", 4));
}

MU_TEST(test_frontTimes_hi_0) {
  mu_assert_string_eq("", frontTimes("Hi", 0));
}

MU_TEST(test_frontTimes_empty_5) {
  mu_assert_string_eq("", frontTimes("", 5));
}

MU_TEST_SUITE(suite) {
  MU_RUN_TEST(test_frontTimes_chocolate_2);
  MU_RUN_TEST(test_frontTimes_ab_3);
  MU_RUN_TEST(test_frontTimes_a_4);
  MU_RUN_TEST(test_frontTimes_hi_0);
  MU_RUN_TEST(test_frontTimes_empty_5);
}

int main(void) {
  MU_RUN_SUITE(suite);
  MU_REPORT();
  return MU_EXIT_CODE;
}
