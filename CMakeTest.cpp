// CMakeTest.cpp : Defines the entry point for the application.
//

#include "CMakeTest.h"
#include <gtest/gtest.h>

using namespace std;

TEST(CMakeTestTests, BasicTest) {
	EXPECT_TRUE(true);
}

int main()
{
	testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
