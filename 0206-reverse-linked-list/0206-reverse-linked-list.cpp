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
    ListNode* reverseList(ListNode* head) {
        ListNode *dummyhead = nullptr  ;
        ListNode *temp;
        ListNode* current = head;
        temp = dummyhead;
        vector<int> newarr;
        while( current != nullptr ){
            newarr.push_back(current -> val);
            current = current -> next;
        }
        vector<int> newarr2;
        newarr2 = newarr;
        reverse(newarr2.begin(),newarr2.end());
        for(int i = 0 ; i<newarr2.size();i++)
        {ListNode* newNode = new ListNode(newarr2[i]);
            if (dummyhead == nullptr) {
                dummyhead = newNode; 
                temp = newNode; 
            } else {
                temp-> next = newNode; 
                temp = newNode; 
            }
        }
        return dummyhead;
        
    }
};