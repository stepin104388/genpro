#include "unity.h"
#include "sweeper.h"

	void setUp()
	{	}
	void tearDown()
	{	}

	void test_minesweeper(void)
	{
    TEST_PASS_MESSAGE("PASS");
	}
	void test_minesweeper1(void)
	{
    TEST_PASS_MESSAGE("PASS");
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_minesweeper);
		RUN_TEST(test_minesweeper1);

  		return UNITY_END();
	}
