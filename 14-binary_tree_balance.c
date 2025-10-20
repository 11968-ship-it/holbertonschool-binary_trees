#include "binary_trees.h"

/**
* binary_tree_balance - measures the balance factor.
*
* @tree: a pointer to the root node of the tree.
*
* Return: the measurement of the balance factor,
* If tree is NULL, return 0.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
  int left_height = 0;
  int right_height = 0;
  
  if (tree == NULL)
    return (0);

  if (tree->left)
  left_height = binary_tree_height(tree->left) + 1;

  if (tree->right)
  right_height = binary_tree_height(tree->right) + 1;

return (left_height - right_height);
}

