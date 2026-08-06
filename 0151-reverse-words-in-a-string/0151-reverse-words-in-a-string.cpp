class Solution {
    void reverses(int i,int j, string &s){
    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}
void remove(string &s) {
        int i = 0, j = 0;
        int n = s.length();

        while (i < n) {
            // Skip leading spaces
            while (i < n && s[i] == ' ')
                i++;

            // Copy one word
            while (i < n && s[i] != ' ')
                s[j++] = s[i++];

            // Skip spaces after the word
            while (i < n && s[i] == ' ')
                i++;

            // Add one space if another word exists
            if (i < n)
                s[j++] = ' ';
        }

        s.resize(j);
    }
public:
    string reverseWords(string s) {
        remove(s);
       int n=s.length();
       int i=0;
       int j=0;
        reverses(0,n-1,s);
       while(j<n){
        if (s[i] == ' '){
            s.erase(i, 1);
            i++;
            j=i;
        }
    
            if(s[j]==' '|| j==n-1){
                if(j==n-1){
                    reverses(i,j,s);
                    j++;
                    
                }
                else{
                    reverses(i,j-1,s);
                    i=j+1;
                    j=i;
                }
                
            }
            else{
                j++;
            }
       }
       return s;
    }
};