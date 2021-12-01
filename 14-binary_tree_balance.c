#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

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

size_t height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + height(tree->left) : 0;
	height_r = tree->right ? 1 + height(tree->right) : 0;
	return (height_l - height_r);
}

int binary_tree_balance(const binary_tree_t *tree)
{
    size_t result_l = 0;
    if (tree)
    {
        result_l = height(tree);
        return (result_l);
    }
    return (0);
}
