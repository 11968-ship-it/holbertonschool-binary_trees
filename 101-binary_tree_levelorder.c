#include "binary_trees.h"
#include <stddef.h>

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node
*
* Return: Height of the tree, 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
	return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((left > right ? left : right) + 1);
}

/**
* print_level - Prints nodes at a given level
* @tree: Pointer to the root node
* @func: Function pointer to apply to node values
* @level: Current level to print
*/

void print_level(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (!tree)
	return;

	if (level == 1)
	func(tree->n);
	else
	{
	print_level(tree->left, func, level - 1);
	print_level(tree->right, func, level - 1);
	}
}

/**
* binary_tree_levelorder - Traverses a binary tree using level-order
* @tree: Pointer to the root node
* @func: Function pointer to apply to node values
*
* Description: Goes through the tree level by level and applies func
*              to each node's value.
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h, i;

	if (!tree || !func)
	return;

	h = binary_tree_height(tree);
	for (i = 1; i <= h; i++)
	print_level(tree, func, i);
}

