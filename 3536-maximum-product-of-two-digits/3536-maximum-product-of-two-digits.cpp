class Solution {
public:
    int maxProduct(int n) {
        vector<int> store;
        int nums = n ;
        while( nums > 0 ){
            store.push_back(nums%10);
            nums = nums/10;
        }
        sort(store.begin(),store.end());
        return (store[store.size()-2] * store[store.size()-1]);
    }
};