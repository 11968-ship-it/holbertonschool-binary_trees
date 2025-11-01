#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of nodes in the tree
 */
static size_t binary_tree_size(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_complete_rec - Checks completeness using index
 * @tree: Pointer to the root node
 * @index: Current node index
 * @size: Total nodes in tree
 *
 * Return: 1 if complete, 0 if not
 */
static int binary_tree_is_complete_rec(const binary_tree_t *tree,
                                       size_t index, size_t size)
{
    if (!tree)
        return (1);

    if (index >= size)
        return (0);

    return (binary_tree_is_complete_rec(tree->left, 2 * index + 1, size) &&
            binary_tree_is_complete_rec(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if complete, 0 if not or if tree is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
    size_t size;

    if (!tree)
        return (0);

    size = binary_tree_size(tree);
    return (binary_tree_is_complete_rec(tree, 0, size));
}
