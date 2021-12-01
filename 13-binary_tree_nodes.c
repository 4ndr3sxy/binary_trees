#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

// size_t binary_tree_height_s_r(const binary_tree_t *tree)
// {
//     if (!tree)
//     {
//         return 0;
//     }
//     if (tree->right)
//     {
//         return 1 + (binary_tree_height_s_r(tree->right));
//     }
//     else if (tree->left)
//     {
//         return 1 + (binary_tree_height_s_r(tree->left));
//     }
//     else
//         return 0;
// }

// size_t binary_tree_height_s_l(const binary_tree_t *tree)
// {
//     if (!tree->left && !tree->right)
//     {
//         return (1);
//     }
//     if (tree->left)
//     {
//         return (0 + binary_tree_height_s_l(tree->left));
//     }
//     if (tree->right)
//     {
//         return (0 + binary_tree_height_s_l(tree->right));
//     }
//     return 0;
// }

size_t binary_tree_height_s_l(const binary_tree_t *tree)
{
    size_t left;
    size_t right;

    if (tree->left || tree->right)
    {
        left = tree->left ? 1 + binary_tree_height_s_l(tree->left) : 0;
        right = tree->right ? 1 + binary_tree_height_s_l(tree->right) : 0;
        return (left + right);
    }
    else
    {
        return (0);
    }
}

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t result_l = 0;
    if (tree)
    {
        result_l = binary_tree_height_s_l(tree);
        if(!tree->parent)
            result_l--;
        return (result_l);
    }
    return (0);
}
