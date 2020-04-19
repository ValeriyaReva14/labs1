#pragma once
#include "TreeNode.h"

class BinaryTree
{
public:
	BinaryTree();

	BinaryTree(int value);

	~BinaryTree();

	void DeleteNodesTree();
	void Insert(int key);
	TreeNode* Search(int key);
	void Print();

private:
	TreeNode* root;
	void DeleteNodesTree(TreeNode* le�f);
	void Insert(int key, TreeNode* leaf);
	TreeNode* Search(int key, TreeNode* leaf);
	void Print(TreeNode* leaf);
};

