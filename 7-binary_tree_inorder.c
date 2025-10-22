#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_inorder - Goes through a binary tree using in-order
 * traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node.
 * The value in the node
 * must be passed as a parameter to this function
 *
 * Description: If tree or func is NULL, does nothing. Traverses the binary
 * tree
 * by visiting the left subtree, then the current node, then the
 * right subtree.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
/* the function works pre not in oreder*/
if (tree == NULL || func == NULL)
return;
/*inorder = left, current, then right*/
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
