#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_depth_s - function that measures the depth
 * of a node in a binary tree.
 * @tree: Binary tree
 * Return: Number of levels of the depth
 */
size_t binary_tree_depth_s(const binary_tree_t *tree)
{
	if (!tree->parent)
		return (0);
	else
		return (1 + (binary_tree_depth_s(tree->parent)));
}

/**
 * binary_tree_depth - Validate if tree is not null
 * @tree: Binary tree
 * Return: Number of levels of the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_depth_s(tree));
	return (0);
}
