#include "../warmup1/sumDouble.c"
#include "include/minunit.h"

MU_TEST(test_sumDouble_diff_values) {
    mu_assert_int_eq(5, sumDouble(2, 3));
}

MU_TEST(test_sumDouble_same_values) {
    mu_assert_int_eq(10, sumDouble(5, 5));
}

MU_TEST_SUITE(suite) {
    MU_RUN_TEST(test_sumDouble_diff_values);
    MU_RUN_TEST(test_sumDouble_same_values);
}

int main(void) {
    MU_RUN_SUITE(suite);
    MU_REPORT();
    return minunit_failcount == 0 ? 0 : 1;
}
