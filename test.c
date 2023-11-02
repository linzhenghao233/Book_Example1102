#include <stdio.h> 
/*typedef int datatype;
typedef struct Node{
	datatype data;
	struct Node* Lchild;
	struct Node* Rchild;
}BTree;

//�õݹ��㷨�����������ı���
//�ȸ�����
void perorder(BTree* root){
	if(root != NULL){
		printf("%d", root->data);
		perorder(root->Lchild);
		perorder(root->Rchild);
	}
}

//�и�����
void midorder(BTree* root){
	if(root != NULL){
		midorder(root->Lchild);
		printf("%d", root->data);
		midorder(root->Rchild);
	}
}

//�������
void suborder(BTree* root){
	if(root != NULL){
		suborder(root->Lchild);
		suborder(root->Rchild);
		printf("%d", root->data);
	}
} */

//�ǵݹ�ʵ���и����� 
#define MAX 100
typedef int dataType;
typedef struct Node {
	dataType data;
	struct Node* Lchild;
	struct Node* Rchild;
}BTnode, * BTree;

void inorder(BTree root) {
	BTree q;	//q�ǹ���ָ�� 
	int top;	//topջ��ָ��
	int bb;
	BTnode s[MAX];
	top = 0;
	q = root;
	bb = 0;

	while (bb != 1) {
		if (q != NULL) {
			top++;
			if (top > max) {
				bb = 1;
				printf("ջ��\n");
			}
			else {
				s[top] = q;
				q = q->Lchild;
			}
		}
		else {
			if (top == 0)
				bb = 1;
			else {
				q = s[top];
				top--;
				printf("����q->data");
				q = q->Rchild;
			}
		}
	}
}