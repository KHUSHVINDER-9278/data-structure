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
    //middle of list
     ListNode* midList(ListNode* head){
        ListNode* first=head;
        ListNode* sec=head;
        while(sec!=NULL&& sec->next!=NULL){
            sec=sec->next->next;
            first=first->next;
        }
        return first;
      }
      //reverse of list
       ListNode* rev(ListNode* head){
        ListNode* next=NULL;
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
        
      }
public:
    bool isPalindrome(ListNode* head) {

        if(head->next==NULL){
            return true;
        }
    //find middle call
    ListNode* middle=midList(head);

    //reverse call
    ListNode* temp=middle;
    middle=rev(temp);

    //check equality

    ListNode* temp1=head;
    ListNode* temp2=middle;
    while(temp2!=NULL){
        if(temp1->val!=temp2->val){
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return true;

     
     



       
        
    }
};