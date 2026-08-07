class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char, char> mp;
       unordered_map<char, char> mp2;
        if (s.length() != t.length())
            return false;
        int n = t.length();
        for (int i = 0; i < n; i++) {
            char a=s[i], b=t[i];
            if(mp.count(a) && mp[a]!=b) return false;
            if(mp2.count(b) && mp2[b]!=a) return false;

            mp[a]=b;
            mp2[b]=a;
        }
        return true;
        
    }
};