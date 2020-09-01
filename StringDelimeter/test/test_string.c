
#include "unity.h"
#include "String.h"

void setUp()
	{	}
	void tearDown()
	{	}

void test_delimeter(void)
	{
	    char test[]="my_name_is_edcast_future_skills";
  		TEST_ASSERT_EQUAL_STRING("my,name,is,edcast,future,skills", delimeter(test));
	}



int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_delimeter);

  		return UNITY_END();
	}
