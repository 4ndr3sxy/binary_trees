#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree->left)
    {
        binary_tree_postorder(tree->left, func);
    }
    if (tree->right)
    {
        binary_tree_postorder(tree->right, func);
    }
    func(tree->n);
}

void binary_tree_binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree)
    {
        binary_tree_postorder(tree, func);
    }
}
