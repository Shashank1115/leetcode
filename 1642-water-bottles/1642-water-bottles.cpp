class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int counter = numBottles;
       int empty  = numBottles;
       while(empty >= numExchange){
        int bottles = empty / numExchange;
        counter += bottles;
        empty = empty % numExchange + bottles;
       }
       return counter;
    }
};