#include <gtest/gtest.h>
#include "../include/lab1.hpp"

TEST(replace, replaceEveryFirstOccurrence) {
    std::string input = "privet mir";
    std::string result = replace(input, 1, 'i', 'e');
    EXPECT_EQ(result, "prevet mer");
}

TEST(replace, replaceEverySecondOccurrence) {
    std::string input = "Vader said: No, I am your father!";
    std::string result = replace(input, 2, 'a', 'o');
    EXPECT_EQ(result, "Vader soid: No, I am your fother!");
}

TEST(replace, noReplacementWhenNOldValueTooBig) {
    std::string input = "banana";
    std::string result = replace(input, 10, 'a', 'o');
    EXPECT_EQ(result, "banana");
}

TEST(replace, noReplacementWhenNIsZero) {
    std::string input = "banana";
    std::string result1 = replace(input, 0, 'a', 'o');
    EXPECT_EQ(result1, "banana");
    std::string result2 = replace(input, -7, 'a', 'o');
    EXPECT_EQ(result2, "banana");
}

TEST(replace, noReplacementWhenNIsNegative) {
    std::string input = "banana";
    std::string result = replace(input, -3, 'a', 'o');
    EXPECT_EQ(result, "banana");
}

TEST(replace, replaceThirdOccurrence) {
    std::string input = "aaaaa";
    std::string result = replace(input, 3, 'a', 'b');
    EXPECT_EQ(result, "aabaa");
}

TEST(replace, MultipleReplacementsScenario) {
    std::string input = "aaa";
    std::string result1 = replace(input, 1, 'a', 'b');
    EXPECT_EQ(result1, "bbb");
    std::string result2 = replace(result1, 1, 'b', 'c');
    EXPECT_EQ(result2, "ccc");
}

TEST(replace, replaceInEmptyString) {
    std::string input = "";
    std::string result = replace(input, 2, 'x', 'y');
    EXPECT_EQ(result, "");
}

TEST(replace, replaceCharNotFound) {
    std::string input = "hello world";
    std::string result = replace(input, 2, 'z', 'x');
    EXPECT_EQ(result, "hello world");
}

TEST(replace, multipleReplacements) {
    std::string input = "mississippi";
    std::string result = replace(input, 2, 's', 'S');
    EXPECT_EQ(result, "misSisSippi");
}
