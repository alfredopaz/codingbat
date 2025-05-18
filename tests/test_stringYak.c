#include "../warmup2/stringYak.c"
#include "include/minunit.h"

MU_TEST(test_stringYak_empty) {
  mu_assert_string_eq("", stringYak(""));
}

MU_TEST(test_stringYak_no_yak) {
  mu_assert_string_eq("abc", stringYak("abc"));
}

MU_TEST(test_stringYak_exact) {
  mu_assert_string_eq("", stringYak("yak"));
}

MU_TEST(test_stringYak_start) {
  mu_assert_string_eq("pak", stringYak("yakpak"));
}

MU_TEST(test_stringYak_end) {
  mu_assert_string_eq("pak", stringYak("pakyak"));
}

MU_TEST(test_stringYak_middle) {
  mu_assert_string_eq("", stringYak("yakyak"));
}

MU_TEST(test_stringYak_mixed) {
  mu_assert_string_eq("xxxyyyzz", stringYak("xxxyakyyyakzz"));
}

MU_TEST(test_stringYak_overlaps) {
  // "yyakyakyy" → elimina ambos "yak" superpuestos → queda "yyy"
  mu_assert_string_eq("yyy", stringYak("yyakyakyy"));
}

MU_TEST(test_stringYak_case_sensitive) {
  // Solo "yak" minúsculo se elimina
  mu_assert_string_eq("YakYak", stringYak("YakYak"));
}

MU_TEST_SUITE(suite) {
  MU_RUN_TEST(test_stringYak_empty);
  MU_RUN_TEST(test_stringYak_no_yak);
  MU_RUN_TEST(test_stringYak_exact);
  MU_RUN_TEST(test_stringYak_start);
  MU_RUN_TEST(test_stringYak_end);
  MU_RUN_TEST(test_stringYak_middle);
  MU_RUN_TEST(test_stringYak_mixed);
  MU_RUN_TEST(test_stringYak_overlaps);
  MU_RUN_TEST(test_stringYak_case_sensitive);
}

int main(void) {
  MU_RUN_SUITE(suite);
  MU_REPORT();
  return MU_EXIT_CODE;
}
