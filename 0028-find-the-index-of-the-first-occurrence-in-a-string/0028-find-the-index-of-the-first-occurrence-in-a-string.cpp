class Solution {
public:
    int strStr(string haystack, string needle) {
        int sizee =  haystack.size();
        int storei = 0 ; 
        int i = 0 ;
        int j = 0 ;
        while( i < haystack.size()){
            if(haystack[i] == needle[j]){
                i++;
                j++;
                if( j == needle.size()){
                    return storei;
                }
            }
                else{
                    storei++;
                    i = storei;
                    j = 0;
                }
            
        }
 return -1;
    }
};