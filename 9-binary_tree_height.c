#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a tree
 * @tree: ptr to the root node
 * Return: returns the height of the three
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
	size_t lHeight, rHeight;

	lHeight = 0;
	rHeight = 0;

	if (tree->left)
		lHeight = 1 + binary_tree_height(tree->left);
	else
		lHeight = 0;

	if (tree->right)
		rHeight = 1 + binary_tree_height(tree->right);

	if (lHeight > rHeight)
		return (lHeight);
	else
		return (rHeight);
	}
	return (0);
}
