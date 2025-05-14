#include "../warmup1/parrotTrouble.c"
#include "include/minunit.h"

MU_TEST(test_parrotTrouble_morning_talking) {
    mu_assert_int_eq(1, parrotTrouble(1, 6));
}

MU_TEST(test_parrotTrouble_morning_not_talking) {
    mu_assert_int_eq(0, parrotTrouble(0, 6));
}

MU_TEST(test_parrotTrouble_evening_talking) {
    mu_assert_int_eq(0, parrotTrouble(1, 21));
}

MU_TEST_SUITE(suite) {
    MU_RUN_TEST(test_parrotTrouble_morning_talking);
    MU_RUN_TEST(test_parrotTrouble_morning_not_talking);
    MU_RUN_TEST(test_parrotTrouble_evening_talking);
}

int main(void) {
    MU_RUN_SUITE(suite);
    MU_REPORT();
    return MU_EXIT_CODE;
}
