#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node
 * Return: returns the counted leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	leaves = 0;

	if (tree == NULL)
		return (leaves);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (leaves);
}
