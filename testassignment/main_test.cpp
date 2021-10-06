#include <gtest/gtest.h>
#include "main.cpp"

TEST(factorial_test, Handles_zero_input)
{
  EXPECT_EQ(factorial(0), 1);
}

TEST(factorial_test, handles_positive_input)
{
  EXPECT_EQ(factorial(1), 1);
  EXPECT_EQ(factorial(2), 2);
  EXPECT_EQ(factorial(3), 6);
  EXPECT_EQ(factorial(4), 24);

  EXPECT_TRUE(factorial(1) == 1);
  EXPECT_TRUE(factorial(2) == 2);

  EXPECT_FALSE(factorial(3) == 8);
  EXPECT_FALSE(factorial(4) == 16);
}

TEST(factorial_test, failing_tests)
{
  EXPECT_EQ(factorial(1), 2);
  EXPECT_EQ(factorial(2), 3);
  EXPECT_EQ(factorial(3), 7);
  EXPECT_EQ(factorial(4), 25);
}

TEST(double_addition_test, double_addition)
{
  EXPECT_NEAR(double_addition(2.64, 6.21), 8.85, 0.1);
  EXPECT_NEAR(double_addition(2.64, 6.21), 8.80, 0.1);
  EXPECT_NEAR(double_addition(2.64, 6.21), 8.50, 0.1);

  EXPECT_NEAR(double_addition(4.94, 3.65), 8.59, 0.1);
  EXPECT_NEAR(double_addition(4.94, 3.65), 8.50, 0.1);
  EXPECT_NEAR(double_addition(4.94, 3.65), 8.75, 0.1);
}