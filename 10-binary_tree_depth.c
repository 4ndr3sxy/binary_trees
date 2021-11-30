#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

size_t binary_tree_depth_s(const binary_tree_t *tree)
{
    if (!tree->parent)
    {
        return 0;
    }
    else
    {
        return 1 + (binary_tree_depth_s(tree->parent));
    }
}

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t result = 0;
    if (tree)
    {
        return binary_tree_depth_s(tree);
    }
    return (result);
}
