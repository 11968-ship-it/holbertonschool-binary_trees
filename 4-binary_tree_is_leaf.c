/*malloc, free*/
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
/*if it is a NULL not a leaf*/
if (node == NULL)
return (0);
/*to check the childern*/
if (node->left == NULL && node->right == NULL)
return (1);
/*not a leaf*/
return (0);
}
