#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *child = NULL;

    child = binary_tree_node(parent, value);
    if (!parent->right)
        parent->right = child;
    else
    {
        child->right = parent->right;
        parent->right->parent = child;
        parent->right = child;
    }

    return (child);
}
