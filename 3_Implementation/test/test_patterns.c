#include "unity.h"

#include "inc\pattern.h"

#include <stdio.h>

#define PROJECT_NAME "pattern application"

/* Prototypes for some of test functions as there are so many */
void test_square_star_pattern();
void test_rhombus_star_pattern();

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_square_star_pattern);
  RUN_TEST(test_rhombus_star_pattern);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_square_star_patter() {
  TEST_ASSERT_EQUAL(1, square_star_patter());
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, square_star_patter());
}

void test_rhombus_star_pattern() {
  TEST_ASSERT_EQUAL(1, rhombus_star_pattern());
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, rhombus_star_pattern());
}


