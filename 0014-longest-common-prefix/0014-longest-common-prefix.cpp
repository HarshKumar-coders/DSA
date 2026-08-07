class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int r=strs[0].size();
        int c=strs.size();
        bool a=true;
        string ans ="";
        for(int i=0;i<r;i++){
            char ch=strs[0][i];
            for(int j=1;j<c;j++){
                if(ch!=strs[j][i]){
                    a = false;
                    break;
                }
            }
            if(a==false) break;
            else ans.push_back(ch);
            
        }
        return ans;
    }
};