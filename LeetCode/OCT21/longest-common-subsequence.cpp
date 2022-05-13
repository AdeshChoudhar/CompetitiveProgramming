//
// Created by adeshchoudhar on 01/10/21.
//

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int length1 = text1.length();
        int length2 = text2.length();

        int dp[length1 + 1][length2 + 1];
        for (int i = 0; i <= length1; i++) {
            for (int j = 0; j <= length2; j++) {
                if ((i == 0) || (j == 0)) {
                    dp[i][j] = 0;
                } else if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[length1][length2];
    }
};
