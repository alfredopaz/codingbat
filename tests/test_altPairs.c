#include "../warmup2/altPairs.c"
#include "include/minunit.h"

MU_TEST(test_altPairs_empty) {
  mu_assert_string_eq("", altPairs(""));
}

MU_TEST(test_altPairs_single) {
  mu_assert_string_eq("a", altPairs("a"));
}

MU_TEST(test_altPairs_two_chars) {
  mu_assert_string_eq("ab", altPairs("ab"));
}

MU_TEST(test_altPairs_three_chars) {
  // Solo los índices 0,1
  mu_assert_string_eq("ab", altPairs("abc"));
}

MU_TEST(test_altPairs_four_chars) {
  // "abcd" → índices 0-1
  mu_assert_string_eq("ab", altPairs("abcd"));
}

MU_TEST(test_altPairs_five_chars) {
  // "abcde" → índices 0-1 y 4 → "abe"
  mu_assert_string_eq("abe", altPairs("abcde"));
}

MU_TEST(test_altPairs_six_chars) {
  // "abcdef" → índices 0-1 y 4-5 → "abef"
  mu_assert_string_eq("abef", altPairs("abcdef"));
}

MU_TEST(test_altPairs_kitten) {
  // "kitten" → "ki" + "en"
  mu_assert_string_eq("kien", altPairs("kitten"));
}

MU_TEST(test_altPairs_chocolate) {
  // "Chocolate" → "Ch" + "ol" + "e"
  mu_assert_string_eq("Chole", altPairs("Chocolate"));
}

MU_TEST(test_altPairs_numeric) {
  // "0123456789" → "01" + "45" + "89"
  mu_assert_string_eq("014589", altPairs("0123456789"));
}

MU_TEST(test_altPairs_codingHorror) {
  // Ejemplo adicional: "CodingHorror" → "Congrr"
  mu_assert_string_eq("Congrr", altPairs("CodingHorror"));
}

MU_TEST_SUITE(suite) {
  MU_RUN_TEST(test_altPairs_empty);
  MU_RUN_TEST(test_altPairs_single);
  MU_RUN_TEST(test_altPairs_two_chars);
  MU_RUN_TEST(test_altPairs_three_chars);
  MU_RUN_TEST(test_altPairs_four_chars);
  MU_RUN_TEST(test_altPairs_five_chars);
  MU_RUN_TEST(test_altPairs_six_chars);
  MU_RUN_TEST(test_altPairs_kitten);
  MU_RUN_TEST(test_altPairs_chocolate);
  MU_RUN_TEST(test_altPairs_numeric);
  MU_RUN_TEST(test_altPairs_codingHorror);
}

int main(void) {
  MU_RUN_SUITE(suite);
  MU_REPORT();
  return MU_EXIT_CODE;
}
