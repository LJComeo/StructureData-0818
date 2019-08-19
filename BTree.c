#include "BTree.h"

#include <stdio.h>
#include <stdlib.h>

//˼�����þ�̬������ʹ�ô��ķ���
BTNode* BinaryTreeCreate(BTDataType* src)//�������Ĵ���
{
	static int s_n = 0;//��̬�������ֲ��ɼ���ȫ�ֱ���
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
void BinaryTreePrevOrder(BTNode* root)//��������ǰ�����
{
	if (root)
	{
		putchar(root->_data);
		BinaryTreePrevOrder(root->lchild);
		BinaryTreePrevOrder(root->rchild);
	}
}
void BinaryTreeInOrder(BTNode* root)//���������������
{
	if (root)
	{
		BinaryTreePrevOrder(root->lchild);
		putchar(root->_data);
		BinaryTreePrevOrder(root->rchild);
	}
}
void BinaryTreePostOrder(BTNode* root)//�������ĺ������
{
	if (root)
	{
		BinaryTreePrevOrder(root->lchild);
		BinaryTreePrevOrder(root->rchild);
		putchar(root->_data);
	}
}
void BinaryTreeDestory(BTNode* root)//������������(����)
{
	if (root)
	{
		BinaryTreeDestory(root->lchild);
		BinaryTreeDestory(root->rchild);
		free(root);
	}
}

void BinaryTreeLevelOrder(BTNode* root)//�������
{
	//��������(����)ʵ��
	//�Ƚ�root�ŵ������У�Ȼ����ʾ����
	//Ȼ���������Һ��Ӷ��ŵ�������
	//Ȼ��root����
	//whileѭ���������������ǣ�����Ϊ��
}
void BinaryTreePrevOrderNonR(BTNode* root)//ǰ��ǵݹ����
{
	//����ջ(˳���)ʵ��
	//�ȴ�ӡroot
	//������Һ��ӣ���ջ
	//��������ӣ����벢��ӡ����
	//���û�����ӣ�ȡջ��
	//while�ĵ����������ǣ�ȡջ����curΪ��
}