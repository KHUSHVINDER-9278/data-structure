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

private:
   ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* next=NULL;
        ListNode* prev=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;

   }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            
            return NULL;
        }


        head=reverse(head);

        ListNode* temp=head;
        ListNode*prev=NULL;

        int count =1;
        
            while(count!=n){
                prev=temp;
                temp=temp->next;
                count++;
            }
            if(temp==NULL){
                return reverse(head);
            }
            if(prev==NULL){
                head=temp->next;
            }
            else{
                prev->next=temp->next;
            }
            
            
            
            delete(temp);

            


        
        return reverse(head);

       
    
        
    }
};