#include <stdio.h>

typedef struct Node {
	int data;
	struct Node* next;
} Node; 

Node* MakeNode(int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->next = NULL; // ������ �ʱ�ȭ�� ������Ѵ�.
	node->data = data;

	return node; // ��� �̸� ��ü�� �ּҰ��̱� ������ �׳� �Ѱܵ���.
}

int main() {

}

/*

1.
	���� ���Ḯ��Ʈ
	��->��->��->��

2.
	��->��->��->��
	1��° ���� data�� ����, �����Ⱚ

*/