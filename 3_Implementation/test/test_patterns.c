#include "unity.h"
#include "unity_internals.h"
#include "pattern.h"

#include <stdio.h>

#define PROJECT_NAME "pattern application"

/* Prototypes for some of test functions as there are so many */
void test_square_star();
void test_rhombus_star();

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
  RUN_TEST(test_square_star);
  RUN_TEST(test_rhombus_star);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_square_star() {
  TEST_ASSERT_EQUAL(1, square_star(1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, square_star(2));
}

void test_rhombus_star() {
  TEST_ASSERT_EQUAL(1, rhombus_star(2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, rhombus_star(3));
}


