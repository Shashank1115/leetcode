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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return nullptr;
        vector<int> store;
        unordered_map<int,int> mp;
        while(head != NULL){
            store.push_back(head -> val);
            head = head -> next;
        }
        for( auto it : store){
            mp[it]++;
        }
        store.clear();
        for(auto [val , freq] : mp){
            if(freq == 1){
                store.push_back(val);
            }
        }
        if(store.size() == 0 ) return nullptr;
        sort(store.begin(),store.end());
        ListNode* test = new ListNode(store[0]);
        ListNode* start = test;
        for(int i = 1 ; i < store.size() ; i++){
            test -> next = new ListNode(store[i]);
            test = test -> next;
        }
        return start;
    }
};