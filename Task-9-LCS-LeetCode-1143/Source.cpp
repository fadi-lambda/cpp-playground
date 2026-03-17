#include <iostream>
using namespace std;

int longestCommonSubsequence(char* str1, char* str2, int m, int n) {
    if (m == 0 || n == 0) return 0;

    if (str1[m - 1] == str2[n - 1]) {
        return 1 + longestCommonSubsequence(str1, str2, m - 1, n - 1);
    } else {
        int a = longestCommonSubsequence(str1, str2, m-1, n);
        int b = longestCommonSubsequence(str1, str2, m, n-1);

        if (a > b) return a;
        else return b;
    }
}