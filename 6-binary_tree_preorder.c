#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

void preorder(const binary_tree_t *tree, void (*func)(int))
{
    func(tree->n);
    if (tree->left)
        preorder(tree->left, func);
    if (tree->right)
        preorder(tree->right, func);
}

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree)
    {
        preorder(tree, func);
    }
}
