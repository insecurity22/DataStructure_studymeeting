#include <stdio.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;

Node* DeleteNode(Node* head, int data) {
	Node* temp = head;
	Node* remove = NULL;

	while (temp->next != NULL) {
		if (temp->next->data = data) break;
		else temp = temp->next;
		if (temp->next == NULL) return 0;

		remove = temp->next;
		temp->next = remove;
		tree(remove);
	}
}

int main() {

}

/* 
	
	head   10    20	   30
	 ㅁ -> ㅁ -> ㅁ -> ㅁ

	20을 지우고 싶으면

	20 주소를 기억하고
	10 다음에 30 가리키고 
	20을 지운다

*/