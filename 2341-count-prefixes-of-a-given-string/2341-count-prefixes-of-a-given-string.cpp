class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        
        int counter = 0 ;
        for(int j = 0 ; j <  words.size() ;j++){
           string str = words[j];
           int i  = 0;
           bool good = true;
        while(i < (int)str.size()){
            
            if(i>= (int)s.size() || str[i] != s[i]){
                good = false;
                break;
            }
                i++;
            
            
        }
            if(good)counter++;
        }
        return counter;
    }
};