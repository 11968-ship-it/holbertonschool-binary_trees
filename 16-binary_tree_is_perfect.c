#include "binary_trees.h"

/**
* bt_height - Measures the height of a binary tree (local helper)
* @tree: pointer to the root node of the tree to measure
*
* Return: height of the tree, or 0 if tree is NULL
*/
static size_t bt_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
	return (0);

	lh = tree->left ? 1 + bt_height(tree->left) : 0;
	rh = tree->right ? 1 + bt_height(tree->right) : 0;

return (lh > rh ? lh : rh);
}

/**
* binary_tree_size - Measures the size of a binary tree
* @tree: pointer to the root node of the tree to measure
*
* Return: size (number of nodes), or 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
*
* @tree: a pointer to the root node of the tree to check
*
* Return: 1 if the binary tree is perfect.
* Otherwise, 0.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, perfect_nodes;

	if (tree == NULL)
		return (0);

	height = bt_height(tree);
	size = binary_tree_size(tree);
	perfect_nodes = ((size_t)1 << (height + 1)) - 1;

return (size == perfect_nodes);
}
