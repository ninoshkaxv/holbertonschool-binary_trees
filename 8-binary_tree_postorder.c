#include "binary_trees.h"

/**
 * binary_tree_postorder - runs through a binary tree using postorder traversal
 * @tree: ptr to the root node
 * @func: func ptr to call for each node
 * Return: nothing
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
