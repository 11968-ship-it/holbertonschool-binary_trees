#include "binary_trees.h"

/**
* binary_tree_ancestor_depth - Helper function to find depth of a node
* @node: Pointer to the node
*
* Return: Depth of the node (root has depth 0)
*/
static size_t binary_tree_ancestor_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	while (node && node->parent)
	{
	node = node->parent;
	depth++;
	}

	return (depth);
}

/**
* binary_trees_ancestor - Finds the lowest common ancestor of two nodes
* @first: Pointer to the first node
* @second: Pointer to the second node
*
* Return: Pointer to the lowest common ancestor node,
* or NULL if no common ancestor found
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t depth_first, depth_second;

	if (!first || !second)
	return (NULL);

	depth_first = binary_tree_ancestor_depth(first);
	depth_second = binary_tree_ancestor_depth(second);

	while (depth_first > depth_second)
	{
	first = first->parent;
	depth_first--;
	}

	while (depth_second > depth_first)
	{
	second = second->parent;
	depth_second--;
	}

	while (first && second && first != second)
	{
	first = first->parent;
	second = second->parent;
	}

	return ((binary_tree_t *)first);
}
