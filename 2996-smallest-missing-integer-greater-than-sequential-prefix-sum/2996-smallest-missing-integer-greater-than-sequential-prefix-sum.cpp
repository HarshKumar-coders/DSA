class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        int i=1;
        while(i<n){
            if(nums[i]-nums[i-1]==1){
                sum+=nums[i];
                i++;
            }
            else{
                break;
            }
        }
        unordered_map<int,int> mp;
         i=0;
        while(i<n){
            mp[nums[i]]++;
            i++;
        }
        int x=sum;
       while(mp.find(x) != mp.end()) {
            x++;
        }
        return x;
       }
};