#include <stdio.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;

void Problem(Node* head) {
	Node* temp1 = head->next;
	Node* temp2 = head->next;
	while (temp2->next != NULL) {
		temp1 = temp1->next;
		temp2 = temp2->next->next;
	}
	return temp1;
}
