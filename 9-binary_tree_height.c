#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree
 * @tree: Pointer to the node to measures the height
 * Return: The height of the tree starting at @node
 */
size_t height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + height(tree->left) : 0;
	height_r = tree->right ? 1 + height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_height - Validate if tree is not null
 * @tree: Binary tree
 * Return: 0 if the tree is NULL or the value the return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
		return (height(tree));
	return (0);
}
