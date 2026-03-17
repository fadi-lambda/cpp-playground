#include "gtest/gtest.h"
#include "Header.h"

// ================= PROBLEM 1: Source Code Similarity Analyzer =================
TEST(SourceCodeSimilarityTest, BasicLCS) {
    char str1[] = "ABCDEF";
    char str2[] = "AEBDF";
    EXPECT_EQ(longestCommonSubsequence(str1, str2, 6, 5), 4); // "ABDF"
}

TEST(SourceCodeSimilarityTest, IdenticalStrings) {
    char str1[] = "SOFTWARE";
    char str2[] = "SOFTWARE";
    EXPECT_EQ(longestCommonSubsequence(str1, str2, 8, 8), 8);
}

TEST(SourceCodeSimilarityTest, NoCommonCharacters) {
    char str1[] = "XYZ";
    char str2[] = "ABC";
    EXPECT_EQ(longestCommonSubsequence(str1, str2, 3, 3), 0);
}

TEST(SourceCodeSimilarityTest, EmptyString) {
    char str1[] = "";
    char str2[] = "HELLO";
    EXPECT_EQ(longestCommonSubsequence(str1, str2, 0, 5), 0);
}