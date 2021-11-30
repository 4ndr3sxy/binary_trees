#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *child = NULL;

    child = malloc(sizeof(binary_tree_t));
    if (!child)
        return (NULL);
    child->left = NULL;
    child->right = NULL;
    child->parent = parent;
    child->n = value;

    return (child);
}
