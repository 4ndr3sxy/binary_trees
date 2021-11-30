#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

void delete(binary_tree_t *tree)
{
    if (tree->right)
        delete(tree->right);
    if (tree->left)
        delete(tree->left);
    free(tree);
}

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree)
    {
        delete(tree);
    }
}
