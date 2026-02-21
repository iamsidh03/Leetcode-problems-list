/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {

    ListNode reverse(ListNode head){
        ListNode prev=null;
        ListNode curr=head;
        while(curr!=null){
            ListNode forward=curr.next;
            curr.next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    ListNode Middle(ListNode head){
        if(head==null) return null;
        if(head.next==null) return head;
        ListNode slow=head;
        ListNode fast=head.next;
        while(fast!=null&&fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        return slow;
    }
    public boolean isPalindrome(ListNode head) {
        
        if(head==null) return true;
        if(head.next==null) return true;

        ListNode startIndex=head;
        ListNode middleIndex=Middle(head);
        ListNode reverseMiddle=reverse(middleIndex.next);

        while(reverseMiddle!=null){
            if(startIndex.val!=reverseMiddle.val){
                return false;
            }
            startIndex=startIndex.next;
           reverseMiddle= reverseMiddle.next;
        }
        return true;
    }
}