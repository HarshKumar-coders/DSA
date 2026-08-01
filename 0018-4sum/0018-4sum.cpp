class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<vector<int>> st;
        int n=nums.size();
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int a=j+1;
                int b=n-1;
                   while(a<b){
                    long long sum = (long long)nums[i] + nums[j] + nums[a] + nums[b];
                    if (sum == target) {
                        st.insert({nums[i], nums[j], nums[a], nums[b]});
                    a++;
                    b--;
                    
                   } 
            else if (sum < target) {
                a++;
            }
            else {
                b--;
            }

                }
            }
        }
        vector<vector<int>>out(st.begin(),st.end());
        return out;
    }
};