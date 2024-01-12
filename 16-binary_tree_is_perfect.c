#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to binary_tree_t
*
* Return: Heigth of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0, to_add = 0;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (tree->left || tree->right)
		to_add = 1;

	if (right_h >= left_h)
		return (to_add + right_h);
	else
		return (to_add + left_h);
}

/**
* binary_tree_same_height - Check if height is same for both subtrees
* @tree: pointer to binary_tree_t
*
* Return: 1 or 0
*/
size_t binary_tree_same_height(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (right_h == left_h)
		return (1);

	return (0);
}

/**
* binary_tree_zero_two_node - Check if node has two or zero children
* @tree: pointer to binary_tree_t
*
* Return: 1 if it has 2 or 0 children and 0 otherwise
*/
size_t binary_tree_zero_two_node(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0, yes = 0;

	if (tree == NULL)
		return (1);

	left_h = binary_tree_zero_two_node(tree->left);
	right_h = binary_tree_zero_two_node(tree->right);

	if ((tree->left && tree->right) || (!tree->left && !tree->right))
		yes = 1;

	return (yes *  left_h * right_h);
}

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
* @tree: pointer to binary_tree_t
*
* Return: int
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t right = 1, left = 1, yes = 0, same = 0;

	if (tree == NULL)
		return (0);

	yes = binary_tree_zero_two_node(tree);
	same = binary_tree_same_height(tree);

	if (tree->right)
		right = binary_tree_is_perfect(tree->right);
	if (tree->left)
	left = binary_tree_is_perfect(tree->left);

	return (yes && same && left && right ? 1 : 0);
}
