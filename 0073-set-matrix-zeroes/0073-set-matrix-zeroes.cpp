class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        set<int>ro;
        set<int>co;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    ro.insert(i);
                    co.insert(j);
                }
            }
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(ro.count(i) || co.count(j)){
                   matrix[i][j]=0;
                }
            }
        }

   

    }
};