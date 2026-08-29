class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n = s1.length();
        int m = s2.length();

        // Length must match
        if (n + m != s3.length())
            return false;

        // dp[j] = whether s3[0 ... i+j-1]
        // can be formed using s1[0 ... i-1] and s2[0 ... j-1]
        vector<bool> dp(m + 1, false);

        dp[0] = true;

        // Using only s2
        for (int j = 1; j <= m; j++) {
            dp[j] = dp[j - 1] && (s2[j - 1] == s3[j - 1]);
        }

        for (int i = 1; i <= n; i++) {

            // Using only s1
            dp[0] = dp[0] && (s1[i - 1] == s3[i - 1]);

            for (int j = 1; j <= m; j++) {

                // Take current character from s1
                bool takeS1 = dp[j] &&
                              (s1[i - 1] == s3[i + j - 1]);

                // Take current character from s2
                bool takeS2 = dp[j - 1] &&
                              (s2[j - 1] == s3[i + j - 1]);

                dp[j] = takeS1 || takeS2;
            }
        }

        return dp[m];
    }
};