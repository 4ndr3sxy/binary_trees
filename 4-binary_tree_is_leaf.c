#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)
        return (0);
    else if (!node->left && !node->right)
        return (1);
    return (0);
}
