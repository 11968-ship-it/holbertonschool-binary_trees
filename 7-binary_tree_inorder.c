#include <stdio.h>
#include "binary_trees.h"
/*
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
