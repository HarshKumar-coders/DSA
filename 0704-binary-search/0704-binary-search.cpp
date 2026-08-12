class Solution {
public:
    int search(vector<int>& nums, int target) {
        int e=nums.size()-1;
        int s=0;
        int i=s+(e-s)/2;
        while(s<=e){
            if(nums[i]==target) return i;
            else if(nums[i]>target){
                e=i-1;
            }
            else {
                s=i+1;
            }
            i=s+(e-s)/2;
        }
        return -1;
    }
};