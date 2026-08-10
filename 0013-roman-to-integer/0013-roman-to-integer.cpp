class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;

        int i=0;
        int j=1;
        int sum=0;
        while(j<=s.length()){
            if(mp[s[i]]>=mp[s[j]]){
                sum+=mp[s[i]];
                i++;
                j++;
            }
            else{
                sum+=mp[s[j]];
                sum-=mp[s[i]];
                j=j+2;
                i=i+2;
            }

        }
        return sum;
    }
};