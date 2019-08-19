#ifndef _BTREE_H_
#define _BTREE_H_


typedef char BTDataType;

typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* lchild;
	struct BinaryTreeNode* rchild;
}BTNode;
// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BinaryTreeCreate(BTDataType* a);//创建二叉树
void BinaryTreeDestory(BTNode** root);

int BinaryTreeSize(BTNode* root);//元素的个数
int BinaryTreeLeafSize(BTNode* root);//叶子数
int BinaryTreeLevelKSize(BTNode* root, int k);//第几层有几个元素


BTNode* BinaryTreeFind(BTNode* root, BTDataType x);

// 遍历
void BinaryTreePrevOrder(BTNode* root);
void BinaryTreeInOrder(BTNode* root);
void BinaryTreePostOrder(BTNode* root);
// 非递归遍历


// 层序遍历
void BinaryTreeLevelOrder(BTNode* root);

// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root);
void BinaryTreePrevOrderNonR(BTNode* root);
void BinaryTreeInOrderNonR(BTNode* root);
void BinaryTreePostOrderNonR(BTNode* root);
void TestBinaryTree();

#endif//_BTREE_H_