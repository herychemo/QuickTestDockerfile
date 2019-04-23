#include "gtest/gtest.h"
#include "hello.h"
#include <iostream>

// https://github.com/google/googletest/blob/master/googletest/docs/primer.md

TEST(HelloLib, buildHelloSuccess)
{
    EXPECT_TRUE( buildHello("Someone") == "Hello Someone\n" );
    ASSERT_STREQ(buildHello("World").c_str(), "Hello World\n");
    ASSERT_STREQ(buildHello("Bro").c_str(), "Hello Bro\n");
    ASSERT_STREQ(buildHello("friend.").c_str(), "Hello friend.\n");
}

TEST(HelloLib, buildHelloFailed)
{
    EXPECT_FALSE( buildHello("Someone") == "Hello someone\n" );
    ASSERT_STRNE(buildHello("World").c_str(), "Hello World");
    ASSERT_STRNE(buildHello("Bro").c_str(), "Hello Bro.");
    ASSERT_STRNE(buildHello("friend.").c_str(), "Hello Friend.");
}
