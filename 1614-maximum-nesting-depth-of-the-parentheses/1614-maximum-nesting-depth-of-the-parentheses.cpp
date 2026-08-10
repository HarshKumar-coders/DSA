class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int c=0;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='('){
                c++;
            }
            else if(ch==')'){
                c--;
            }
            ans=max(ans,c);
        }
        return ans;
    }
};