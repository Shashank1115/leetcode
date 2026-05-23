class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(),stones.end());
        while(pq.size() >= 2){
            int store = pq.top();
            pq.pop();
            int val = store - pq.top();
            pq.pop();
            if(val > 0 ){
                pq.push(val);
            }
        }
        if(pq.size() == 1) {
            return pq.top();
            }
    return 0;

        
    }
};