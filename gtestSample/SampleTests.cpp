#include <memory>
#include <gtest/gtest.h>

TEST(SampleTests, ArithmeticAdd)
{
    int a = 10;
    int b = 2;

    ASSERT_EQ(12, a + b);
}

TEST(SampleTests, ArithmeticSub)
{
    int a = 10;
    int b = 2;

    ASSERT_EQ(8, a - b);
}

TEST(SampleTests, ArithmeticMul)
{
    int a = 10;
    int b = 2;

    ASSERT_EQ(20, a * b);
}

TEST(SampleTests, ArithmeticDiv)
{
    int a = 10;
    int b = 2;

    ASSERT_EQ(5, a / b);
}