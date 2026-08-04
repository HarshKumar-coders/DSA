class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
     int maxi=INT_MIN;
     int mini=INT_MAX;
    int n=nums.size();
     for(int i=0;i<n;i++){
        maxi=max(maxi,nums[i]);
         mini=min(mini,nums[i]);
     } 
    sort(nums.begin(),nums.end());
    int j=0;
     for(int i=mini;i<=maxi;i++){
        if(j < n && nums[j] == i) {
        j++;
    } else {
        ans.push_back(i);
    }

     }
     return ans;

  
    }
};