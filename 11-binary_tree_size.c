#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

size_t binary_tree_height_s_r(const binary_tree_t *tree)
{
    if (!tree)
    {
        return 0;
    }
    else if (tree->right)
    {
        return 1 + (binary_tree_height_s_r(tree->right));
    }
    else if (tree->left)
    {
        return 1 + (binary_tree_height_s_r(tree->left));
    }
    else
        return 0;
}

size_t binary_tree_height_s_l(const binary_tree_t *tree)
{
    if (!tree)
    {
        return 0;
    }
    else if (tree->left)
    {
        return 1 + (binary_tree_height_s_l(tree->left));
    }
    else if (tree->right)
    {
        return 1 + (binary_tree_height_s_l(tree->right));
    }
    else
        return 0;
}

size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t result_l = 0;
    size_t result_r = 0;
    size_t total = 0;

    if (tree)
    {
        result_l = binary_tree_height_s_l(tree);
        result_r = binary_tree_height_s_r(tree);
        printf("---\n");
        printf("%ld", result_l);
        printf("---\n");
        printf("---\n");
        printf("%ld", result_r);
        printf("---\n");
        total = result_r + result_l;
        return total;
    }
    return (0);
}
