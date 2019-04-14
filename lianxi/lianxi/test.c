#include"tree.h"
#include"queue.h"
BSTreeNode *CreateTree(int preOrder[], int size, int *pUsedSize)
{
	if (size <= 0)
	{
		*pUsedSize = 0;
		return NULL;
	}
	int leftUse, rightUse;
	int rootValue = preOrder[0];
	if (rootValue == -1)
	{
		*pUsedSize = 1;
		return NULL;
	}
	BSTreeNode *root = CreateNode(rootValue);
	root->left = CreateTree(preOrder + 1, size - 1, &leftUse);
	root->right = CreateTree(preOrder + 1 + leftUse, size - 1 - leftUse, &rightUse);

	*pUsedSize = 1 + leftUse + rightUse;
	return root;
}

void  PrintTree(BSTreeNode *root)
{
	if (root == NULL)
	{
		return;
	}
	Queue que;
	QueueInit(&que);
	QueuePush(&que, root);
	while (!QueueEmpty(&que))
	{

		root = QueueFront(&que);
		QueuePop(&que);
		printf("%d", root->data);
		if (root->left)
		{
			QueuePush(&que, root->left);
		}
		if (root->right)
		{
			QueuePush(&que, root->right);
		}
	}
}

int main()
{
	int preOrder[] = { 3, 9, 20, -1, -1, 15, 7 };
	int size = sizeof(preOrder) / sizeof(int);
	int usedSize;
	BSTreeNode *root = CreateTree(preOrder, size, &usedSize);
	PrintTree(root);
	system("pause");
	return 0;
}