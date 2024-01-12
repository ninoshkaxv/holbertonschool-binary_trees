![github-header-image(3)](https://github.com/ninoshkaxv/holbertonschool-binary_trees/assets/143634181/f9ba52f2-0a04-494e-b810-d837b56df3ce)

# Binary Tree Project

## Table of Contents
- [Overview](#overview)
- [Data Structures](#data-structures)
- [Files](#files)
- [Example](#example)
- [Authors](#authors)

## Overview 📚
This project implements a binary tree data structure in C, providing various operations such as insertion, deletion, traversal, and information retrieval. The implementation includes functions to calculate the size, depth, height, leaves, nodes, balance, and check for properties like fullness and perfection in the binary tree.

## Data Structures 🌲
### Basic Binary Tree
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

## Files 📂

    0-binary_tree_node.c - File description: Defines a function that creates a new binary tree node.
    1-binary_tree_insert_left.c - File description: Defines a function that inserts a node as the left child of another node.
    2-binary_tree_insert_right.c - File description: Defines a function that inserts a node as the right child of another node.
    3-binary_tree_delete.c - File description: Defines a function that deletes an entire binary tree.
    4-binary_tree_is_leaf.c - File description: Defines a function that checks if a node is a leaf in a binary tree.
    5-binary_tree_is_root.c - File description: Defines a function that checks if a given node is a root in a binary tree.
    6-binary_tree_preorder.c - File description: Defines a function that performs a pre-order traversal of a binary tree.
    7-binary_tree_inorder.c - File description: Defines a function that performs an in-order traversal of a binary tree.
    8-binary_tree_postorder.c - File description: Defines a function that performs a post-order traversal of a binary tree.
    9-binary_tree_height.c - File description: Defines a function that measures the height of a binary tree.
    10-binary_tree_depth.c - File description: Defines a function that measures the depth of a node in a binary tree.
    11-binary_tree_size.c - File description: Defines a function that measures the size of a binary tree.
    12-binary_tree_leaves.c - File description: Defines a function that counts the leaves in a binary tree.
    13-binary_tree_nodes.c - File description: Defines a function that counts the nodes with at least one child in a binary tree.
    14-binary_tree_balance.c - File description: Defines a function that measures the balance factor of a binary tree.
    15-binary_tree_is_full.c - File description: Defines a function that checks if a binary tree is full.
    16-binary_tree_is_perfect.c - File description: Defines a function that checks if a binary tree is perfect.
    17-binary_tree_sibling.c - File description: Defines a function that finds the sibling of a node in a binary tree.
    18-binary_tree_uncle.c - File description: Defines a function that finds the uncle of a node in a binary tree.
    binary_tree_print.c - File description: Defines a function to print a binary tree.
    binary_trees.h - File description: Header file containing function prototypes and necessary data structures.


## Example 🚀
```c
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root = binary_tree_node(NULL, 98);

    binary_tree_insert_left(root, 12);
    binary_tree_insert_right(root, 402);
    binary_tree_insert_left(root->left, 6);
    binary_tree_insert_right(root->left, 56);
    binary_tree_insert_left(root->right, 256);
    binary_tree_insert_right(root->right, 512);


    binary_tree_print(root);

    return (0);
}
```

## Authors 👩‍💻👨‍💻

- Ninoshka Perez
- Leomar Rodriguez
- Leandro Pagani
