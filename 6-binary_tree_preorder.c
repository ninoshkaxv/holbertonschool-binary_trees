#include "binary_trees.h"

/**
 * binary_tree_preorder - runs through a binary tree using pre-order traversal
 * @tree: ptr to the root node
 * @func: func ptr to call for each node
 * Return: nothing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
