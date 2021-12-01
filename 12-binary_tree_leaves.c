#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_height_s_r - counts the leaves in a binary tree
 * @tree: Pointer to the node to measures the height
 * Return: The height of the tree starting at @node
 */
size_t binary_tree_height_s_r(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
	{
		return (1);
	}
	else
	{
		height_l = tree->left ? 0 + binary_tree_height_s_r(tree->left) : 0;
		height_r = tree->right ? 0 + binary_tree_height_s_r(tree->right) : 0;
		return (height_l + height_r);
	}
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: Pointer to the node to measures the height
 * Return: The height of the tree starting at @tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t result_r = 0;

	if (tree)
	{
		result_r = binary_tree_height_s_r(tree);
		return (result_r);
	}
	return (0);
}
