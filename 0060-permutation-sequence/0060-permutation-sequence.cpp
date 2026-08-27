class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums;
        
        // Available numbers
        for (int i = 1; i <= n; i++) {
            nums.push_back(i);
        }

        // Factorials
        vector<int> fact(n + 1, 1);
        for (int i = 1; i <= n; i++) {
            fact[i] = fact[i - 1] * i;
        }

        // Convert k to 0-based
        k--;

        string ans = "";

        for (int i = n - 1; i >= 0; i--) {

            // Which block?
            int index = k / fact[i];

            // Pick that number
            ans += to_string(nums[index]);

            // Remove used number
            nums.erase(nums.begin() + index);

            // Move inside selected block
            k %= fact[i];
        }

        return ans;
    }
};