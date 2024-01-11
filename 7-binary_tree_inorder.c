#include "binary_trees.h"

/**
 * binary_tree_inorder - runs through a binary tree using inorder traversal
 * @tree: ptr to the root node
 * @func: func ptr to call for each node
 * Return: nothing
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
