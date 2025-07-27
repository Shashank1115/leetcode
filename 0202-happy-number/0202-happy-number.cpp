class Solution {
public:
    bool isHappy(int n) {
        //  unordered_map<int, int> mp;
        // vector<int> store;
        // int num = n;
        // if (n < 10 && n != 1) return false;

        // while (1) {
        //     store.clear();
        //     int sum = 0;

        //     while (num > 0) {
        //         store.push_back(num % 10);
        //         num = num / 10;
        //     }

        //     for (int i = 0; i < store.size(); i++) {
        //         sum += store[i] * store[i];
        //     }

        //     if (sum == 1) return true;

        //     if (sum < 10 && sum != 1) return false;

        //     if (mp[sum]) return false;  // cycle detected
        //     mp[sum] = 1;

        //     num = sum;
        // }

        // return true;
        unordered_set<int> seen;
        int num = n ;
        int store = 0 ;
        int k = 10;
        while(1){
        while(num >= 1){
            int x = num % 10;
            num = num /10;
            store +=  (x*x);
        }
        if(store == 1) return true;
        if(seen.find(store) != seen.end()){
            return false;
            break;
        }
        else{
            seen.insert(store);
            num  = store;
            store = 0;
        }

        }
        return true;
    }
};