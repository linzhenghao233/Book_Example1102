#include <stdio.h> 
/*typedef int datatype;
typedef struct Node{
	datatype data;
	struct Node* Lchild;
	struct Node* Rchild;
}BTree;

//用递归算法分析二叉树的遍历
//先根遍历
void perorder(BTree* root){
	if(root != NULL){
		printf("%d", root->data);
		perorder(root->Lchild);
		perorder(root->Rchild);
	}
}

//中根遍历
void midorder(BTree* root){
	if(root != NULL){
		midorder(root->Lchild);
		printf("%d", root->data);
		midorder(root->Rchild);
	}
}

//后根遍历
void suborder(BTree* root){
	if(root != NULL){
		suborder(root->Lchild);
		suborder(root->Rchild);
		printf("%d", root->data);
	}
} */

//非递归实现中根遍历 
#define MAX 100
typedef int dataType;
typedef struct Node {
	dataType data;
	struct Node* Lchild;
	struct Node* Rchild;
}BTnode, * BTree;

void inorder(BTree root) {
	BTree q;	//q是工作指针 
	int top;	//top栈顶指针
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
				printf("栈满\n");
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
				printf("访问q->data");
				q = q->Rchild;
			}
		}
	}
}