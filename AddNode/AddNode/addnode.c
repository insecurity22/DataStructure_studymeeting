#include <stdio.h>

typedef struct Node {
	int data;
	struct Node* next;
} Node;

Node* MakeNode(int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->next = NULL;
	node->data = data;

	return node;
}

Node* AddNode(Node* head, int data) {
	Node* temp = head;
	Node* new = MakeNode(data); // 데이터 계속해서 만들어줌
	while (temp->next != NULL) {
		temp = temp->next;
	}
	head = head->next;
}

int main() {

}
