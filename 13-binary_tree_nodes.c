#include "binary_trees.h"

/**
* binary_tree_nodes - counts the nodes of a binary tree
* that has at least one child
* @tree: pointer to binary_tree_t
*
* Return: number of nodes 
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0, to_add = 0;

	if (tree == NULL)
		return (0);

	if (tree->right || tree->left)
		to_add = 1;

	left_h = binary_tree_nodes(tree->left);
	right_h = binary_tree_nodes(tree->right);

	return (right_h + left_h + to_add);
}