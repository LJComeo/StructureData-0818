#include "BTree.h"

#include <stdio.h>
#include <stdlib.h>

//思考不用静态变量，使用传的方法
BTNode* BinaryTreeCreate(BTDataType* src)//二叉树的创建
{
	static int s_n = 0;//静态变量：局部可见的全局变量
	if (src[s_n] == '#')
	{
		s_n++;
		return NULL;
	}
	BTNode *cur = (BTNode *)malloc(sizeof(BTNode));
	cur->_data = src[s_n];
	s_n++;

	cur->lchild = BinaryTreeCreate(src);
	cur->rchild = BinaryTreeCreate(src);

	return cur;
}
void BinaryTreePrevOrder(BTNode* root)//二叉树的前序遍历
{
	if (root)
	{
		putchar(root->_data);
		BinaryTreePrevOrder(root->lchild);
		BinaryTreePrevOrder(root->rchild);
	}
}
void BinaryTreeInOrder(BTNode* root)//二叉树的中序遍历
{
	if (root)
	{
		BinaryTreePrevOrder(root->lchild);
		putchar(root->_data);
		BinaryTreePrevOrder(root->rchild);
	}
}
void BinaryTreePostOrder(BTNode* root)//二叉树的后序遍历
{
	if (root)
	{
		BinaryTreePrevOrder(root->lchild);
		BinaryTreePrevOrder(root->rchild);
		putchar(root->_data);
	}
}
void BinaryTreeDestory(BTNode* root)//二叉树的销毁(后序)
{
	if (root)
	{
		BinaryTreeDestory(root->lchild);
		BinaryTreeDestory(root->rchild);
		free(root);
	}
}

void BinaryTreeLevelOrder(BTNode* root)//层序遍历
{
	//借助队列(链表)实现
	//先将root放到队首中，然后显示队首
	//然后将他的左右孩子都放到队列中
	//然后root出队
	//while循环的跳出条件就是：队列为空
}
void BinaryTreePrevOrderNonR(BTNode* root)//前序非递归遍历
{
	//借助栈(顺序表)实现
	//先打印root
	//如果有右孩子，入栈
	//如果有左孩子，进入并打印左孩子
	//如果没有左孩子，取栈顶
	//while的调处条件就是：取栈顶的cur为空
}