//
// Created by Pavel Akhtyamov on 02/04/2018.
//

#include <gtest/gtest.h>
#include <cmath>
#include "my_first_function.h"



TEST(SquareTest, PositiveNos) {
  EXPECT_EQ(9.0, square(3.0)); // Есть еще ASSERT_EQ
}


TEST(RootSquareTest, Positive) {
  EXPECT_EQ(3.0, my_sqrt(9.0));
  EXPECT_EQ(5.0, my_sqrt(25.0));
}


TEST(RootSquareTest, Negative) {
  EXPECT_TRUE(std::isnan(my_sqrt(-9.0)));
}
