#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * height - get count of nodes in binary tree
 * @tree: Binary tree
 * Return: number of nodes
 */
size_t height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + height(tree->left) : 0;
	height_r = tree->right ? 1 + height(tree->right) : 0;
	return (height_l + height_r);
}

/**
 * binary_tree_size - Validate if the tree is not null
 * @tree: Binary tree
 * Return: number of nodes in binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (1 + height(tree));
	return (0);
}
