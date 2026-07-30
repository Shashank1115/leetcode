class Solution {
public:
    int minimumPushes(string word) {
        int store = 0;
        for(int i = 0 ; i < word.size() ; i++){
            store += (i/8) + 1;
        }
    return store;
    }
};