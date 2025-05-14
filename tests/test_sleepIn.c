#include "../warmup1/sleepIn.c"
#include "include/minunit.h"

MU_TEST(test_sleepIn_weekday_not_vacation) {
    mu_assert_int_eq(0, sleepIn(1, 0));
}

MU_TEST(test_sleepIn_weekend_not_vacation) {
    mu_assert_int_eq(1, sleepIn(0, 0));
}

MU_TEST(test_sleepIn_weekday_vacation) {
    mu_assert_int_eq(1, sleepIn(1, 1));
}

MU_TEST_SUITE(suite) {
    MU_RUN_TEST(test_sleepIn_weekday_not_vacation);
    MU_RUN_TEST(test_sleepIn_weekend_not_vacation);
    MU_RUN_TEST(test_sleepIn_weekday_vacation);
}

int main(void) {
    MU_RUN_SUITE(suite);
    MU_REPORT();
    return minunit_failcount == 0 ? 0 : 1;
}
