#include "../warmup1/missingChar.c"
#include "include/minunit.h"

MU_TEST(test_missingChar_middle) {
    mu_assert_str_eq("ac", missingChar("abc", 1));
}

MU_TEST(test_missingChar_first) {
    mu_assert_str_eq("bc", missingChar("abc", 0));
}

MU_TEST(test_missingChar_last) {
    mu_assert_str_eq("ab", missingChar("abc", 2));
}

MU_TEST_SUITE(suite) {
    MU_RUN_TEST(test_missingChar_middle);
    MU_RUN_TEST(test_missingChar_first);
    MU_RUN_TEST(test_missingChar_last);
}

int main(void) {
    MU_RUN_SUITE(suite);
    MU_REPORT();
    return minunit_failcount == 0 ? 0 : 1;
}
