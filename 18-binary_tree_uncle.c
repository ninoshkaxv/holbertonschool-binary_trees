#include "binary_trees.h"

/**
* binary_tree_sibling - Find the sibling of a node
* @node: pointer to binary_tree_t
*
* Return: Pointer to sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}

/**
* binary_tree_uncle - Find the uncle of a node
* @node: pointer to binary_tree_t
*
* Return: Pointer to uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
