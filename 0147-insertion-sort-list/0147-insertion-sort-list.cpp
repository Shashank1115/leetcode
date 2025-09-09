/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int> arr;
        while(head != NULL){
            arr.push_back(head -> val);
            head = head -> next;
        }
        sort(arr.begin(),arr.end());
     ListNode* test = new ListNode(arr[0]);
     ListNode* start = test;
     for(int i = 1 ; i < arr.size() ;i++){
        test -> next = new ListNode(arr[i]);
        test = test -> next;
     }
        return start;
    }
};