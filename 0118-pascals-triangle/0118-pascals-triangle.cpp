class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int n=numRows;
        for(int i=0;i<n;i++){
            vector<int>out(i+1,1);
            for(int j=1;j<i;j++){
                out[j]=ans[i-1][j]+ans[i-1][j-1];
            }
            ans.push_back(out);
        }
        return ans;
    }
    
};