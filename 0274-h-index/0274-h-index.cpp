class Solution {
public:
    int hIndex(vector<int>& citations) {
        int counter = 0;
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
        for(int i= 0 ; i < citations.size() ;i++){
            if(citations[i] >= i+1){
                counter++;
            }
            else{
                break;
            }
        }
        return counter;
    }
};