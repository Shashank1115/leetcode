class Solution {
public:
    int SumOfEven(int a){
       int  store = (2*2 + ( a - 1)*2)*a/2;
        return store;
    }
    int SumOfOdd(int b){
        int val = (2 + ( b -1)*2)* b/2;
        return val;
    }
    int findgcd(int c , int d){
        while(d != 0 ){
            int temp = d;
            d = c % d;
            c = temp;
        }
        return c;
    }
    
    int gcdOfOddEvenSums(int n) {
        cout << SumOfEven(n);
        cout << SumOfOdd(n);
       return findgcd(SumOfEven(n),SumOfOdd(n));
    }
};