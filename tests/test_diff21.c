#include "../warmup1/diff21.c"
#include "include/minunit.h"

MU_TEST(test_diff21_less) {
    mu_assert_int_eq(2, diff21(19));
}

MU_TEST(test_diff21_equal) {
    mu_assert_int_eq(0, diff21(21));
}

MU_TEST(test_diff21_more) {
    mu_assert_int_eq(4, diff21(23));
}

MU_TEST_SUITE(suite) {
    MU_RUN_TEST(test_diff21_less);
    MU_RUN_TEST(test_diff21_equal);
    MU_RUN_TEST(test_diff21_more);
}

int main(void) {
    MU_RUN_SUITE(suite);
    MU_REPORT();
    return MU_EXIT_CODE;
}
