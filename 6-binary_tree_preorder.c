/*malloc, free*/
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order
* traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Description: Traverses the tree in pre-order and calls func on each node’s
 * value. If tree or func is NULL, does nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
func(tree->n);
}
