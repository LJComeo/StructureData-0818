#include "BTree.h"

#include <stdio.h>
#include <stdlib.h>

int main()
{
	BTNode*root = BinaryTreeCreate("ABD#GI##J###CE#HK###F##");
	BinaryTreePrevOrder(root);
	putchar('\n');
	BinaryTreeInOrder(root);
	putchar('\n');
	BinaryTreePostOrder(root);

	BinaryTreeDestory(&root);

	system("pause");
	return 0;

}