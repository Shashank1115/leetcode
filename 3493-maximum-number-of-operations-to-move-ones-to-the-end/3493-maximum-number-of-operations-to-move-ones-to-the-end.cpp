class Solution {
public:
    int maxOperations(string s) {
        // int n  = s.size();
        // int i = 0 , counter = 0  ;
        //     while(i + 1 < n ){
        //         if(s[i] == '1'){
        //             int j = i + 1;
        //             while(j < n && s[j] != '1')   j++;
                     
        //             if(j >= n ) break;
        //             if(j - i >= 2){
        //             swap(s[i] , s[j-1]);
        //             counter++;
        //             }
        //             i = j;
                    
                    
        //         }
        //         else {
        //             i++;
        //         }
        //     }
           
        
        // return counter;
         long long ans = 0;
        long long ones = 0;
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                ++ones;
            } else {
              
                if (i + 1 == n || s[i + 1] == '1') ans += ones;
            }
        }
        return (int)ans;
    }
};