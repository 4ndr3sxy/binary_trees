#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_height_s_l - counts the nodes with at least
 * @tree: Pointer to the node to measures the height
 * Return: counts the nodes with at least
 */
size_t binary_tree_height_s_l(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);
	if (tree->right || tree->left)
	{
		height_l = tree->left ? 1 + binary_tree_height_s_l(tree->left) : 0;
		height_r = tree->right ? 1 + binary_tree_height_s_l(tree->right) : 0;
		return (height_l + height_r);
	}
	else
	{
		return(0);
	}
}

/**
 * binary_tree_nodes - Validate if the tree is not null
 * 1 child in a binary tree
 * @tree: Binary tree
 * Return: counts the nodes with at least
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t result_l = 0;

	if (tree)
	{
		result_l = binary_tree_height_s_l(tree);
		if (!tree->parent || result_l != 0)
			result_l--;
		return (result_l);
	}
	return (0);
}
