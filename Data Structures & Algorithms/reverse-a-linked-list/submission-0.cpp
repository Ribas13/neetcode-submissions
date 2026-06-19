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
        if (head == nullptr)
            return nullptr;
        if (head == nullptr || head->next == nullptr)
            return head;

        // get the head->next and save it
        ListNode* path_to_next = head->next;
        head->next = nullptr;
        ListNode* prev = head;
        head = path_to_next;

        while (head != nullptr) {
            path_to_next = head->next;
            head->next = prev;
            prev = head;
            head = path_to_next;
        }
        return prev;
    }
};
