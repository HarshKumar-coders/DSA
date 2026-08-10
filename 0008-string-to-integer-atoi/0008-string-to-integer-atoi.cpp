class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int i=0;
         long long int a=0;
        int si=1;
        while(i<n && s[i]==' ') i++;
        if(i<n && (s[i]=='-' || s[i]=='+')){
            if(s[i]=='-'){
                si=-1;
                i++;
            }
            else{
                i++;
            }
        }

        while(i<n){
            if(s[i]>='0' && s[i]<='9'){
                if(a>(INT_MAX-(s[i]-'0'))/10){
                return si==1 ? INT_MAX :INT_MIN;
            }
                a=a*10+(s[i]-'0');
            i++;
            }
            
            else{
                break;
            }
            
        }
        return si*a;

    }
};