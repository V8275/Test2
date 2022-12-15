#include "pch.h"
#include "..\\UP6\Function.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(round(reshenie(2,4,1000)*1000)/1000, 0.693);
}
TEST(TestCaseName2, TestName2) {
	EXPECT_EQ(round(reshenie(8, 11, 1000) * 1000) / 1000, 0.693);
}
TEST(TestCaseName3, TestName3) {
	EXPECT_EQ(round(reshenie(5, 7, 1000) * 1000) / 1000, 0.693);
}