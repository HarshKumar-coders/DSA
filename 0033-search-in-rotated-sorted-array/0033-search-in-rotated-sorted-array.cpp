class Solution {
public:
    int search(vector<int>& arr, int target) {
        int s=0;
        int e=arr.size()-1;
       // int mid=s+(e-s)/2;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[s]<=arr[mid]){
                if(target>=arr[s] && target<arr[mid]){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if(target>arr[mid] && target<=arr[e]){
                    s=mid+1;
                }
              else{
                  e=mid-1;
              }

            }
            //  mid=s+(e-s)/2;
        }
        return -1;
    }
};