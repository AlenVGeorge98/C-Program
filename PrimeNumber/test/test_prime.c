#include "unity.h"
#include "prime.h"

	void setUp()
	{	}
	void tearDown()
	{	}

	void test_prime(void)
	{
  		TEST_ASSERT_EQUAL_STRING("True", prime(5));
  		TEST_ASSERT_EQUAL_STRING("True", prime(7));
  		TEST_ASSERT_EQUAL_STRING("False", prime(10));
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_prime);

  		return UNITY_END();
	}
