#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 * If node is NULL, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* Check if node is NULL */
	if (node == NULL)
		return (0);

	/* Check node for parent */
	return (node->parent == NULL);
}
