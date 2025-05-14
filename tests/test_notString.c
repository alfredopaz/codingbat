#include "../warmup1/notString.c"
#include "include/minunit.h"

MU_TEST(test_notString_with_not) {
    mu_assert_string_eq("not bad", notString("not bad"));
}

MU_TEST(test_notString_without_not) {
    mu_assert_string_eq("not good", notString("good"));
}

MU_TEST_SUITE(suite) {
    MU_RUN_TEST(test_notString_with_not);
    MU_RUN_TEST(test_notString_without_not);
}

int main(void) {
    MU_RUN_SUITE(suite);
    MU_REPORT();
    return MU_EXIT_CODE;
}
