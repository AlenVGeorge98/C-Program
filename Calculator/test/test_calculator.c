#include "unity.h"
#include "calculator.h"

	void setUp()
	{	}
	void tearDown()
	{	}

	void test_add(void)
	{
  		TEST_ASSERT_EQUAL(30, fptr1(10, 20));
  		TEST_ASSERT_EQUAL(-30, fptr1(-50, 20));
	}
	void test_substract(void)
	{
	 TEST_ASSERT_EQUAL(30, fptr2(40, 10));
     TEST_ASSERT_EQUAL(-70, fptr2(-50, 20));
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_add);
	  	RUN_TEST(test_substract);

  		return UNITY_END();
	}
