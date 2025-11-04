class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //    int j = m-1;
    //    while(j > 0){
    //     if(nums1[j] == 0){
    //         j--;
    //     }
       
    //    }
    //     nums1.erase(remove(nums1.begin()+j, nums1.end(), 0), nums1.end());
    //     for(int i = 0 ; i < n ; i++){
    //         nums1.push_back(nums2[i]);
    //     }
    //     sort(nums1.begin(),nums1.end());
    //     nums1.erase(remove(nums1.begin(), nums1.end(), 0), nums1.end());
        int left  = m -1 ;
        int right = 0 ;
        while(left >= 0 && right < n){
            if(nums1[left] > nums2[right]){
                swap(nums1[left],nums2[right]);
                
                    left--;
                    right++;
                }
                else{
                    break;
                }
            }


        
        sort(nums1.begin(),nums1.begin()+m);
        sort(nums2.begin(),nums2.end());
        for(int i  = 0 ; i < n ; i++){
            nums1[i+m] = nums2[i];
        }
    }
};