class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        unordered_map<char,int>mp2;
        if(s.length()!=t.length()) return false;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            mp2[t[i]]++;
        }
        if(mp==mp2) return true;
        return false;

    }
};