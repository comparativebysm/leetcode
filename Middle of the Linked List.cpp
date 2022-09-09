class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
		ListNode* fast = head;
		while(fast != NULL and fast->next != NULL){
			fast = fast->next->next;
			slow = slow->next;
		}
		return slow;
    }
};
/*
amar moto kora😊😊😊😊😊😊
Node *pre=head;
        int count=0;
        while(pre!=NULL){
            count++;
            pre=pre->next;
        }
        count /=2;
        Node *post=head;
        while(count!=0){
            post=post->next;
            count--;
        }
        return post->data;
	*/
