#include "ListNode.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
///
///   Theodor Waalberg U56124499 
///

ListNode* insertionSortList(ListNode* head) {
	ListNode* current = head;
	//ListNode* wall = head->next;
	vector<int> sortedVec;
	while(current != NULL){
		sortedVec.push_back(current->val);
		ListNode* next = current->next;
		current = next;
	}
	sort(sortedVec.begin(),sortedVec.end());
	reverse(sortedVec.begin(),sortedVec.end());
	current = head;
	int counter = 0;
	while (current != NULL){
		current->val = sortedVec[counter];
		counter++;
		current = current->next;
	}


	// your implementation goes here

	return head; // you will need to change this
}