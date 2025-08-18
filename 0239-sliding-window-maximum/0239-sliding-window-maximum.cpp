class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    //     vector<int> temp;
    //     vector<int> ans;
    //     int i = 1 ;
    //     int j = 0 ;
    //     int counter = 0;
    //     while(j  < nums.size()-k+1){
           
    //         int val = counter;
    //         int test = counter + k;
    //     while(counter < test){
    //         temp.push_back(nums[counter]);
    //         counter++;
    //     }
    //     i++;
    //     priority_queue<int> pq(temp.begin(),temp.end());
    //     ans.push_back(pq.top());
    //     temp.clear();
    //     // while(!pq.empty()){
    //     //     pq.pop();
    //     // }
    //    j++;
    //    counter = val + 1;
    //     }
    //     return ans;
     vector<int> ans;
        // max-heap storing {value, index}
        priority_queue<pair<int,int>> pq;

        // build initial window
        for (int i = 0; i < k; i++) {
            pq.push({nums[i], i});
        }
        ans.push_back(pq.top().first);

        // slide the window
        for (int i = k; i < nums.size(); i++) {
            pq.push({nums[i], i});

            // remove elements outside the window
            while (pq.top().second <= i - k) {
                pq.pop();
            }

            ans.push_back(pq.top().first);
        }

        return ans;
    }
};