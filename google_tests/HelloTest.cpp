//
// Created by daniel on 03/07/24.
//


#include "Operations.h"
#include "gtest/gtest.h"

TEST(HelloTest, AddTest) {
    const int x = Operations::add(33, 77);
    ASSERT_EQ(110, x);
}

TEST(HelloTest, SubTest) {
    const int x = Operations::sub(100, 33);
    ASSERT_EQ(67, x);
}

TEST(HelloTest, ExampleTeste) {
    const int x = Operations::add(Operations::sub(50, 25), Operations::add(15, 15));
    ASSERT_EQ(55, x);
}
