class Solution {
int pro(int n){
    int p=1;
        while(n){
            int a=n%10;
            p=p*a;
            n=n/10;
        }
        return p;
}
public:
    int smallestNumber(int n, int t) {
        
        int p=pro(n);
        int r=p%t;

        if(r==0){
            return n;
        }

        return smallestNumber(n+1,t);
       
    }
};