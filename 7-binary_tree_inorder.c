#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

void inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree->left)
    {
        inorder(tree->left, func);
    }
    func(tree->n);
    if (tree->right)
    {
        inorder(tree->right, func);
    }
}

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree)
    {
        inorder(tree, func);
    }
}
