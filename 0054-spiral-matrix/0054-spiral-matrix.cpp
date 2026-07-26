class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int sc=0;
        int sr=0;
        int ec=col-1;
        int er=row-1;
        int total=row*col;
        int c=0;
        while(c<total){
            for(int i=sc;i<=ec&&c<total;i++){
                ans.push_back(matrix[sr][i]);
                c++;
            }
            sr++;
            for(int i=sr;i<=er&&c<total;i++){
                ans.push_back(matrix[i][ec]);
                c++;
            }
            ec--;
            for(int i=ec;i>=sc&&c<total;i--){
                ans.push_back(matrix[er][i]);
                c++;
            }
            er--;
            for(int i=er;i>=sr&&c<total;i--){
                ans.push_back(matrix[i][sc]);
                c++;
            }
            sc++;
        }
        return ans;

    }
};