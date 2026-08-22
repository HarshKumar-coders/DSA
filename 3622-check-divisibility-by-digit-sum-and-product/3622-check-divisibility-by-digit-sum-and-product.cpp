class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro=1;
        int org=n;
        while(n){
            int a=n%10;
            sum+=a;
            pro*=a;
            n=n/10;
        }
        if(org%(sum+pro)==0) return true;
        else return false;
    }
};