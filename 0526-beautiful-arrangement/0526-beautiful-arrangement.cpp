class Solution {
public:
    // bool isvalid(vector<int> &res , int n){
    //     for(int i = 1 ; i <= n ;i++){
    //         if((res[i-1] % i != 0) && (i % res[i-1] != 0)) return false;
    //     }
    //     return true;
    // }
    void helper(int n , vector<int>&store ,vector<int>&res ,int &counter , vector<bool> &used){
            if(res.size() == store.size() ){
            //  if(  isvalid(res,n)){
                counter++;
             // }
              return;
            }
            int pos = res.size() + 1;
          for(int i = 0 ; i < n ; i++){
            if(used[i]) continue;
            if (store[i] % pos != 0 && pos % store[i] != 0)
            continue;
            used[i] = true;
            res.push_back(store[i]);
            helper(n,store,res,counter,used);
            used[i] = false;
            res.pop_back();
          }
    }
    int countArrangement(int n) {
        vector<int> store(n);
        vector<bool> used(n,false);
        int counter = 0;
        iota(store.begin(),store.end(),1);
        vector<int> res;
        helper(n,store,res,counter,used);
        return counter;
    }
};