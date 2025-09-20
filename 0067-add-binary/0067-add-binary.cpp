class Solution {
public:
    string addBinary(string a, string b) {
        long long store = a.size()-1 ;
        long long store1 = b.size()-1;
        int carry = 0;
        string ans = "";
        while(store >= 0 || store1 >= 0 || carry){
            int sum = carry ;
            if(store >= 0 ) sum += a[store--] - '0';
            if(store1 >= 0) sum += b[store1--] - '0';
            ans.push_back((sum % 2) +'0');
            carry = sum /2;
        }
        reverse(ans.begin(),ans.end());
return ans;
    }
};