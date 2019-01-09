// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// Example:

// Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
// Output: 7 -> 0 -> 8
// Explanation: 342 + 465 = 807.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //含头节点
        ListNode* result = new ListNode(0);
        ListNode* head = result;
        int up = 0;
        int sum = 0;
        while(l1!=NULL && l2!=NULL){
            sum = l1->val+l2->val + up;
            if(sum>9){
                sum = sum - 10;
                up = 1;
            }else{
                up = 0;
            }
            ListNode* temp = new ListNode(sum);
            head->next = temp;
            head = head->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(l1==NULL && l2==NULL){
            if(up>0){
                ListNode* temp = new ListNode(up);
                head->next = temp;
            }
        }
        else if(l1!=NULL){
            while(l1!=NULL){
                sum = l1->val+ up;
                if(sum>9){
                    sum = sum - 10;
                    up = 1;
                }else{
                    up = 0;
                }
                ListNode* temp = new ListNode(sum);
                head->next = temp;
                head = head->next;
                l1 = l1->next;
            }
           
        }
        else{
            while(l2!=NULL){
                sum = l2->val+ up;
                if(sum>9){
                    sum = sum - 10;
                    up = 1;
                }else{
                    up = 0;
                }
                ListNode* temp = new ListNode(sum);
                head->next = temp;
                head = head->next;
                l2 = l2->next;  
            }
            
        }
        if(up>0){
            ListNode* temp = new ListNode(1);
            head->next = temp;
        }
        return result->next;
    }
};