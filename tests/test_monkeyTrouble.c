#include "../warmup1/monkeyTrouble.c"
#include "include/minunit.h"

MU_TEST(test_monkeyTrouble_both_smile) {
    mu_assert_int_eq(1, monkeyTrouble(1, 1));
}

MU_TEST(test_monkeyTrouble_one_smile) {
    mu_assert_int_eq(0, monkeyTrouble(1, 0));
}

MU_TEST(test_monkeyTrouble_neither_smile) {
    mu_assert_int_eq(1, monkeyTrouble(0, 0));
}

MU_TEST_SUITE(suite) {
    MU_RUN_TEST(test_monkeyTrouble_both_smile);
    MU_RUN_TEST(test_monkeyTrouble_one_smile);
    MU_RUN_TEST(test_monkeyTrouble_neither_smile);
}

int main(void) {
    MU_RUN_SUITE(suite);
    MU_REPORT();
    return minunit_failcount == 0 ? 0 : 1;
}
