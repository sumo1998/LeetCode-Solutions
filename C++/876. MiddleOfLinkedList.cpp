/*
    Problem : Aim is to find the middle of a singly linked list
    Solution : 
                We have 2 pointers first and second.
                The first pointer moves one step at a time,
                while the second moves 2 steps at a time;

                So when the second reaches the end of the linked list
                first points to the middle of the linked list
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* first = head, *second = head;
        while(second!=NULL && second->next != NULL){
            second = second->next->next;
            first = first->next;
        }
        
        return first;
    }
};