#include <stdio.h>

typedef struct Node {
	int data;
	struct Node* next;
} Node; 

Node* MakeNode(int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->next = NULL; // 무조건 초기화를 해줘야한다.
	node->data = data;

	return node; // 노드 이름 자체가 주소값이기 때문에 그냥 넘겨도됌.
}

int main() {

}

/*

1.
	단일 연결리스트
	ㅁ->ㅁ->ㅁ->ㅁ

2.
	ㅁ->ㅁ->ㅁ->ㅁ
	1번째 ㅁ은 data가 없음, 쓰레기값

*/