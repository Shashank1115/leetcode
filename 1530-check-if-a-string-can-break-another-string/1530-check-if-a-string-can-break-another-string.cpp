class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(), s2.end());
        bool s1bs2 = true;
        bool s2bs1 = true;
        for(int i = 0 ; i < s1.size() ; i++){
            if(s1[i] > s2[i]) s2bs1 = false;
            if(s2[i] > s1[i])  s1bs2 = false;
        }
        return s1bs2 || s2bs1;
    }
};