class Solution
{
public:
    ListNode* duyet(ListNode* head){
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;

    }

    ListNode *rev(ListNode* head){
      ListNode*prev=NULL;
      ListNode*temp=NULL;
      ListNode*curr=head;
      while(curr)
      {
       temp=curr->next;
      curr->next=prev;
      prev=curr;
      curr=temp;

      }
      return prev;


    }

    bool compareList(ListNode*head1,ListNode*head2){
        while(head1 && head2)
        {
          if(head1->val!=head2->val)    
            return false;
          
          head1=head1->next;
          head2=head2->next;

        }
        return true;
    }

    bool isPalindrome(ListNode *head)
    {
        if(head==NULL || head->next==NULL) return true;
        ListNode *h=head;
        ListNode*rhead =rev(duyet(h));

        return compareList(head,rhead);
    }
};
