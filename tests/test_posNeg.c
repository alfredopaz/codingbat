#include "../warmup1/posNeg.c"
#include "include/minunit.h"

MU_TEST(test_posNeg_pos_neg_false) {
    mu_assert_int_eq(1, posNeg(1, -1, 0));
}

MU_TEST(test_posNeg_both_negative_true) {
    mu_assert_int_eq(1, posNeg(-4, -5, 1));
}

MU_TEST(test_posNeg_both_positive_false) {
    mu_assert_int_eq(0, posNeg(4, 5, 0));
}

MU_TEST_SUITE(suite) {
    MU_RUN_TEST(test_posNeg_pos_neg_false);
    MU_RUN_TEST(test_posNeg_both_negative_true);
    MU_RUN_TEST(test_posNeg_both_positive_false);
}

int main(void) {
    MU_RUN_SUITE(suite);
    MU_REPORT();
    return minunit_failcount == 0 ? 0 : 1;
}
