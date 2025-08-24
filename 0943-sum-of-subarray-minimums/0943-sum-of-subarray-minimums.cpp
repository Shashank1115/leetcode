class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1e9+7;
        int n = arr.size();
        vector<int> left(n,0) , right(n,0);
        stack<pair<int,int>> sleft,sright;
        for(int i = 0 ; i < n ; i++){
            int cnt = 1;
            while(!sleft.empty() && sleft.top().first > arr[i]){
                cnt += sleft.top().second;
                sleft.pop();
            }
            sleft.push({arr[i],cnt});
            left[i] = cnt;
        }
        for(int i = n-1 ; i >= 0 ; i--){
            int cnt = 1;
            while(!sright.empty() && sright.top().first >= arr[i]){
                cnt += sright.top().second;
                sright.pop();
            }
            sright.push({arr[i],cnt});
            right[i] = cnt;
        }
        long long ans = 0;
        for(int i = 0 ; i < n ;i++){
            ans = (ans + ((long long)(left[i]) * (long long)(right[i]) * arr[i]) % MOD) %MOD ;
        }
        return ans;
    }
};


 // long long sum = 0;
        // int n = arr.size();
        // for(int i = 0; i < n; i++) {
        //     int minn = arr[i];
        //     for(int j = i; j < n; j++) {
        //         minn = min(minn, arr[j]);
        //         sum = (sum + minn) % MOD;
        //     }
        // }
        // return (int)sum;