#include "pch.h"
#include "BinaryTree.h"
#include "TreeNode.h"

using namespace std;

int main()
{
	BinaryTree* node = new BinaryTree();
	node->Insert(9);
	node->Insert(4);
	node->Insert(19);
	node->Insert(8);
	node->Insert(5);
	node->Insert(13);
	node->Print();
	delete node;
}

