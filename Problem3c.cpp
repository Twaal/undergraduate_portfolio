#include "ListNode.h"
ListNode* findCycleStart(ListNode* head) {
	ListNode* tort = head;
	ListNode* hare = head;
	bool loopFound = false;
	while(loopFound == false){
		tort = tort->next;
		tort = tort->next;
		hare = hare->next;
		if(hare == tort){
			loopFound = true;
		}
		if(hare == NULL || tort == NULL)
			return NULL;
	}
	if(loopFound == true){
			ListNode* inLoop = hare;
			ListNode* head2 = head;
			ListNode* meetingPoint = hare;
			inLoop = inLoop->next;
			while(inLoop != meetingPoint){
				while(head2 != meetingPoint){
					if (head2 == inLoop){
						return head2;
					}
					head2 = head2->next;
				}
				inLoop = inLoop->next;
				head2 = head;
			}
		return meetingPoint;
		
    }
}