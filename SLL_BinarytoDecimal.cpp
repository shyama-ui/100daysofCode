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
 //Solution from Leetcode 
 //Convert Binary Number in a Linked List to Decimal 
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int size=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
        size=size-1;
        int sum=0;
        int tmp;
        while(head!=NULL && size>=0)
        {
            tmp= (head->val)*pow(2,size);
            sum=sum+tmp;
            size=size-1;
            head=head->next;
        }
       return sum; 
    }
};
