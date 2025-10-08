class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.size() != t.size()) return false;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        //  return s == t;
        unordered_map<char,int> mp;
        if(s.size()!= t.size()) return false;
        for(char it : s){
            mp[it]++;
        }
        for(char itr : t){
            if(mp.find(itr) == mp.end()) return false;
            if(mp[itr] == 0) return false;
            mp[itr]--;

        }
    return true;
    }
};