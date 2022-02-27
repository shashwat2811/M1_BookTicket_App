#include "unity.h"
#include "calculator.h"

void setUp()
{

}

void tearDown()
{

}

void test_add()
{
    float i = 2.000;
    float sum;
    sum=sum+i;
    float act_res = 4.000;
    float exp_res = sum +i;

    TEST_ASSERT_EQUAL(exp_res, act_res);
}

int test_main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);

  /* Close the Unity Test Framework */
  return UNITY_END();
}