class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;
        int n=s.length();
    int i=0;
        while(i<n){
            char a=s[0];
            s.erase(0, 1); 
            s.push_back(a);
             i++;
            if(s==goal){
                return true;
                break;
            }
           
        }
        return false;
        
}
};