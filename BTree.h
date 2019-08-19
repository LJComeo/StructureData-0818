#ifndef _BTREE_H_
#define _BTREE_H_


typedef char BTDataType;

typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* lchild;
	struct BinaryTreeNode* rchild;
}BTNode;
// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
BTNode* BinaryTreeCreate(BTDataType* a);//����������
void BinaryTreeDestory(BTNode** root);

int BinaryTreeSize(BTNode* root);//Ԫ�صĸ���
int BinaryTreeLeafSize(BTNode* root);//Ҷ����
int BinaryTreeLevelKSize(BTNode* root, int k);//�ڼ����м���Ԫ��


BTNode* BinaryTreeFind(BTNode* root, BTDataType x);

// ����
void BinaryTreePrevOrder(BTNode* root);
void BinaryTreeInOrder(BTNode* root);
void BinaryTreePostOrder(BTNode* root);
// �ǵݹ����


// �������
void BinaryTreeLevelOrder(BTNode* root);

// �ж϶������Ƿ�����ȫ������
int BinaryTreeComplete(BTNode* root);
void BinaryTreePrevOrderNonR(BTNode* root);
void BinaryTreeInOrderNonR(BTNode* root);
void BinaryTreePostOrderNonR(BTNode* root);
void TestBinaryTree();

#endif//_BTREE_H_