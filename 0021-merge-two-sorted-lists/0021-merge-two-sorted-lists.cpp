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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v;
        ListNode* temp = list1;
        while (temp != nullptr) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        ListNode* temp1 = list2;
        while (temp1 != nullptr) {
            v.push_back(temp1->val);
            temp1 = temp1->next;
        }
        if (v.empty())
            return nullptr;
        sort(v.begin(), v.end());
        ListNode* head = new ListNode(v[0]);
        ListNode* curr = head;
        for (int i = 1; i < v.size(); i++) {
            curr->next = new ListNode(v[i]);
            curr = curr->next;
        }
        return head;
    }
};