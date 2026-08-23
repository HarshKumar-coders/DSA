class Solution {
private:
    bool palindrome(string s){
        int st=0;
        int e=s.size()-1;
        while(st<=e){
            if(s[st]!=s[e]) return false;
            st++;
            e--;
        }
        
        return true;
    }
public:
    bool isPalindromic(string s) {
        int n=s.size();
        string b="";
        for(int i=0;i<n;i++){
            char ch=s[i];
            int a=ch;
            string temp="";
            while(a>0){
                temp+=char('0'+a%2);
                a=a/2;
            }
            while(temp.size()<8){
                temp+='0';
            }
            reverse(temp.begin(),temp.end());
            b+=temp;
        }
        return palindrome(b);
    }
};