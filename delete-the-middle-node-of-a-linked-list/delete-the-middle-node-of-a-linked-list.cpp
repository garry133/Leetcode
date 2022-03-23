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
    void deleteNode(ListNode* &head, int k,int i){
        if (head == NULL) {
		   return;
	    }
	   // If current node is the node to be deleted
	   if (i == k) {
		  ListNode* t = head;
		   head = head->next; // If it's start of the node head
		   				// node points to second node
		   delete (t); // Else changes previous node's link to
					// current node's link
		   return;
	   }
	   deleteNode(head->next, k, i+1);
    }
    ListNode* deleteMiddle(ListNode* head) {
        int k=0;
        ListNode* temp=head;
        while(temp){
            k++;
            temp=temp->next;
        }
        deleteNode(head,k/2,0);
        return head;
    }
};