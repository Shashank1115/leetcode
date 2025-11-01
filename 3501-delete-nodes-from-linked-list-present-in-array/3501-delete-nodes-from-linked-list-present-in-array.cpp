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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
            vector<int> store;
            unordered_set<int> removeset(nums.begin(), nums.end());
        while(head != NULL){
            store.push_back(head->val);
            head = head -> next;
        }
     vector<int> filtered;
        for (int val : store) {
            if (removeset.find(val) == removeset.end()) {
                filtered.push_back(val);
            }
        }
        if(filtered.empty()) return nullptr;
        ListNode* test = new ListNode(filtered[0]);
        ListNode* start = test;
        for(int i = 1; i < filtered.size() ; i++){
            test -> next = new ListNode(filtered[i]);
            test = test -> next;
        }
        return start;
    }
};