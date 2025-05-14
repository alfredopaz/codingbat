#include "../warmup1/backAround.c"
#include "include/minunit.h"

MU_TEST(test_backAround_abc) {
    mu_assert_string_eq("cabca", backAround("abc"));
}

MU_TEST(test_backAround_a) {
    mu_assert_string_eq("aaa", backAround("a"));
}

MU_TEST_SUITE(suite) {
    MU_RUN_TEST(test_backAround_abc);
    MU_RUN_TEST(test_backAround_a);
}

int main(void) {
    MU_RUN_SUITE(suite);
    MU_REPORT();
    return MU_EXIT_CODE;
}
