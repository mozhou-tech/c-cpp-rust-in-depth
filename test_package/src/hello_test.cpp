//
// Created by LiuYuancheng on 2024/11/26.
//
#include <gtest/gtest.h>

// 一个简单的测试例子
TEST(MyTest, AssertionTrue) {
    EXPECT_EQ(1, 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}