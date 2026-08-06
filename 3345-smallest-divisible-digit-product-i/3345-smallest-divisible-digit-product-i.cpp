class Solution {
public:
    bool helper(int num  , int test){
        int store = 0 ; 
        int mul = 1;
        while(num > 0 ){
            store = num % 10;
            mul = store * mul;
            num = num/10;

        }
      return (mul % test == 0) ? true : false;
    }
    int smallestNumber(int n, int t) {
        for(int i = n ; ; i++ ){
            if(helper(i , t)) return i;
        }
        return 1;
    }
};