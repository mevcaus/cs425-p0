#include <stdlib.h>
#include <stdio.h>
#include "harness/unity.h"
#include "../src/lab.h"


void setUp(void) {
  printf("Setting up tests...\n");
}

void tearDown(void) {
  printf("Tearing down tests...\n");
}

void test_get_greeting(void) {
  char *greeting = get_greeting("Alice");
  TEST_ASSERT_NOT_NULL(greeting);
  TEST_ASSERT_EQUAL_STRING("Hello, Alice!", greeting);
  free(greeting); // Free the allocated memory for the greeting

  greeting = get_greeting(NULL);
  TEST_ASSERT_NULL(greeting);

  greeting = get_greeting("");
  TEST_ASSERT_NOT_NULL(greeting);
  TEST_ASSERT_EQUAL_STRING("Hello, !", greeting);
  free(greeting);
}

void test_get_product(void) {
  int product = get_product(2, 3);
  TEST_ASSERT_EQUAL_INT(6, product);

  product = get_product(-1, 1);
  TEST_ASSERT_EQUAL_INT(-1, product);

  product = get_product(0, 1);
  TEST_ASSERT_EQUAL_INT(0, product);

  product = get_product(-1, -1);
  TEST_ASSERT_EQUAL_INT(1, product);
}

void test_get_incorrect_sum(void) {
  int incorrect_sum = get_incorrect_sum(2, 3);
  TEST_ASSERT_EQUAL_INT(6, incorrect_sum);
}


int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_get_greeting);
  RUN_TEST(test_get_product);
  RUN_TEST(test_get_incorrect_sum);
  return UNITY_END();
}
