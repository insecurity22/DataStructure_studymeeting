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
	 �� -> �� -> �� -> ��

	20�� ����� ������

	20 �ּҸ� ����ϰ�
	10 ������ 30 ����Ű�� 
	20�� �����

*/