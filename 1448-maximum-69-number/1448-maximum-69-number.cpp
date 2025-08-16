class Solution {
public:
    int maximum69Number (int num) {
        vector<int> store;
        while(num > 0){
            store.push_back(num%10);
            num = num /10;
        }
        reverse(store.begin(),store.end());
        int i = 0 ;
       while(i < store.size()){
            if(store[i] == 6 ){
                store[i] = 9;
                break;
            }
            i++;
            
        }
        int storee = 0;
        for(int j = 0  ; j < store.size() ;j++){
            storee = storee * 10 + store[j];
        }
        return storee;
    }
};