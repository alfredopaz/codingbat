#include "../warmup1/makes10.c"
#include "include/minunit.h"

MU_TEST(test_makes10_first) {
    mu_assert_int_eq(1, makes10(10, 5));
}

MU_TEST(test_makes10_second) {
    mu_assert_int_eq(1, makes10(5, 10));
}

MU_TEST(test_makes10_none) {
    mu_assert_int_eq(0, makes10(3, 7));
}

MU_TEST_SUITE(suite) {
    MU_RUN_TEST(test_makes10_first);
    MU_RUN_TEST(test_makes10_second);
    MU_RUN_TEST(test_makes10_none);
}

int main(void) {
    MU_RUN_SUITE(suite);
    MU_REPORT();
    return minunit_failcount == 0 ? 0 : 1;
}
