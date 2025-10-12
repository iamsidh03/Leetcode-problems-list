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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* first=head;
        ListNode* second=first->next;

        while(second!=NULL){
            int gcd_=gcd(first->val,second->val);
            ListNode* NewNode= new ListNode(gcd_);
            //add this node b/w first and second

            NewNode->next=first->next;
            first->next=NewNode;
            first=first->next->next;
            second=first->next;
        }
        return head;
    }
};