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
    if (tree->right)
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
// {
//     if (!tree->left && !tree->right)
//     {
//         return (1);
//     }
//     if (tree->right)
//     {
//         return (0 + binary_tree_height_s_r(tree->right));
//     }
//     if (tree->left)
//     {
//         return (0 + binary_tree_height_s_r(tree->left));
//     }
//     return 0;
// }

size_t binary_tree_height_s_l(const binary_tree_t *tree)
{
    if (!tree->left && !tree->right)
    {
        return (1);
    }
    if (tree->left)
    {
        return (0 + binary_tree_height_s_l(tree->left));
    }
    if (tree->right)
    {
        return (0 + binary_tree_height_s_l(tree->right));
    }
    return 0;
}

size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t result_l = 0;
    size_t result_r = 0;
    if (tree)
    {
        result_l = binary_tree_height_s_l(tree);
        result_r = binary_tree_height_s_r(tree);
        // return (result_r + result_l);
        if (result_l > result_r)    
            return result_l;
        else
            return result_r;
    }
    return (0);
}
