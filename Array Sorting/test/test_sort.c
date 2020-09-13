#include "unity.h"
#include "sort.h"
#include<stdlib.h>
	void setUp()
	{	}
	void tearDown()
	{	}

	void test_sort(void)
	{
     int *a,i,n;
     int ary[6]={1,2,3,4,5,6};
      printf("How many numbers you want to be sorted: ");
      scanf("%d",&n);
      a=(int *)malloc(n *sizeof(int));
      printf("\nEnter %d Numbers: \n\n",n);
      for(i=0;i<=n-1;i++)
      {
            scanf("%d", (a+i));

      }

    TEST_ASSERT_EQUAL_INT(1,sort(a,n));
    free(a);
	}


	int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_sort);

  		return UNITY_END();
	}
