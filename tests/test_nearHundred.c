#include "../warmup1/nearHundred.c"
#include "include/minunit.h"

MU_TEST(test_nearHundred_low) {
    mu_assert_int_eq(1, nearHundred(93));
}

MU_TEST(test_nearHundred_high) {
    mu_assert_int_eq(1, nearHundred(190));
}

MU_TEST(test_nearHundred_far) {
    mu_assert_int_eq(0, nearHundred(89));
}

MU_TEST_SUITE(suite) {
    MU_RUN_TEST(test_nearHundred_low);
    MU_RUN_TEST(test_nearHundred_high);
    MU_RUN_TEST(test_nearHundred_far);
}

int main(void) {
    MU_RUN_SUITE(suite);
    MU_REPORT();
    return minunit_failcount == 0 ? 0 : 1;
}
