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
        int carry=0;
        ListNode* head=l1;
        ListNode* l3=NULL;
        while((l1!=NULL)&&(l2!=NULL))
        {
            int sum=l1->val+l2->val+carry;
            if(sum<10)
            {
                l1->val=sum;
                carry=0;
            }
            else{
                l1->val=sum%10;
                carry=1;
            }
            l3=l1;
            l1=l1->next;
            l2=l2->next;
                
        }
        if(l2!=NULL)
        {
            l3->next=l2;
            for(;carry==1;)
            {
                int sum = l2->val+carry;
                l2->val=sum%10;
                carry=sum/10;
                l3=l2;
                l2=l2->next;
                if(l2==NULL&&carry==1) l3->next=new ListNode(carry--);
            }
            return head;
        }
        else if(l1!=NULL)
        {
            for(;carry==1;)
            {
                int sum = l1->val+carry;
                l1->val=sum%10;
                carry=sum/10;
                l3=l1;
                l1=l1->next;
                if(l1==NULL&&carry==1) l3->next=new ListNode(carry--);
            }
            return head;
        }
        else
        {
            if(carry==1)l3->next=new ListNode(carry);
            return head;
        }

    }
};