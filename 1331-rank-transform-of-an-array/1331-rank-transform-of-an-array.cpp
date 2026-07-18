class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        sort(temp.begin(),temp.end());
        unordered_map<int,int> test;
        int rank = 1;
        for(int itr  : temp){
            if(test.find(itr) == test.end()){
                test[itr] = rank++;
             }

        }
        vector<int> ans;
        for(int it : arr){
            ans.push_back(test[it]);
        }
        return ans;
    }
};