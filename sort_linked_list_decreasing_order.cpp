#include "ListNode.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
///
///   Theodor Waalberg
///
///   This program sorts a singly linked list in decreasing oder. It uses insertion sort.
///

ListNode* insertionSortList(ListNode* head) {
	ListNode* current = head;
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


	

	return head; 
}
