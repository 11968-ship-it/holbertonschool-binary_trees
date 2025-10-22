#include <stdio.h>
#include "binary_trees.h"
/*
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *grandparent;
if (node == NULL || node->parent == NULL ||
node->parent->parent == NULL)
grandparent = node->parent->parent;

}
