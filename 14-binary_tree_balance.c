#include "binary_trees.h"
#include <stdio.h>
/**
* height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure
*
* Return: Height of the tree or 0 if tree is NULL
*/
size_t height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
* binary_tree_balance - Measures the balance factor of a binary tree
* @tree: Pointer to the root node of the tree to measure
*
* Return: Balance factor, or 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	return (0);

	left_height = tree->left ? (int)height(tree->left) : 0;
	right_height = tree->right ? (int)height(tree->right) : 0;

	return (left_height - right_height);
}
