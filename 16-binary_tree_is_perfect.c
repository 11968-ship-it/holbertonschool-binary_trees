#include "binary_trees.h"

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

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	perfect_nodes = ((size_t)1 << (height + 1)) - 1;

return (size == perfect_nodes);
}
