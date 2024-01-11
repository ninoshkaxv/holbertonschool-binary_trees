#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the root node
 * Return: returns the depth of the binary tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;

	/* if parent node is not null iterate to count depth*/
	while (tree != NULL && tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
