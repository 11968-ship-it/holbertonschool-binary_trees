# Holbertonschool-binary_trees

A C project that implements core operations on binary trees, including node creation, insertion, deletion, and tree traversals. It also includes functions to measure tree properties (height, size, balance) and identify relationships like siblings and uncles. The project emphasizes recursion, pointer management, and tree structure analysis.

## Data Structure
**Basic Binary Tree**
```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
**Binary Search Tree**
```c
typedef struct binary_tree_s bst_t;
```
**AVL Tree**
```c
typedef struct binary_tree_s avl_t;
```
**Max Binary Heap**
```c
typedef struct binary_tree_s heap_t;
```

## Prototypes
```c
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
```

## Description

This project provides an implementation of binary trees in C. 
It includes functions for creating and inserting nodes, deleting trees, and traversing them using preorder, inorder, and postorder methods. 

The project also includes utility functions to measure tree properties such as height, depth, size, number of leaves or internal nodes, and balance factor. 

Additionally, it offers tools to determine familial relationships within the tree, like siblings and uncles. 
The implementation emphasizes recursion and pointer manipulation.

### Example Implementation
Here's how we used this prototype to check whether the node is a leaf:
```c
int binary_tree_is_leaf(const binary_tree_t *node);
```

```c
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if (node->left == NULL && node->right == NULL)
return (1);
return (0);
}
```

### Compilation
We used the basic gcc compiler with the following flags:
```bash
$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89
```

### Authors
Thekira A. Ahmed & Yara K. Alrasheed
