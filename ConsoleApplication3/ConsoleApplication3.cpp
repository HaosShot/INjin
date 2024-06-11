#include <gtest/gtest.h>
#include <vector>

std::vector<int> increaseVector(std::vector<int> vec, int n) {
    for (int& elem : vec) {
        elem += n;
    }
    return vec;
}

TEST(IncreaseVectorTest, SimpleTest) {
    
    std::vector<int> input = { 1, 2, 3 };

    std::vector<int> expected = { 4, 5, 6 };

    std::vector<int> result = increaseVector(input, 3);

    EXPECT_EQ(result, expected);
}


