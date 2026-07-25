class Solution {
public:
    int maxProduct(int n) {
        
        int f=0;
        int s=0;

        while(n){
            int a=n%10;
            if (a > f) {
                s = f;
                f = a;
            }
            else if (a > s) {
                s = a;
            }
            n=n/10;
        }

    return f*s;
    }
};