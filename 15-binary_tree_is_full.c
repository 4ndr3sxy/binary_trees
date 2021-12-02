#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * height - get count of N in  abinary tree depend of validator
 * @tree: Binary tree
 * Return: number of N depend of validator
 */
size_t height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((!tree->left && tree->right) || ((tree->left && !tree->right)))
		return (0);
	if ((tree->left && tree->right))
		return (height(tree->left) * height(tree->right));
	return (1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: Binary tree
 * Return: 1 if a binary tree is full or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t resultHeight = 0;

	if (tree)
	{
		resultHeight = height(tree);
		return (resultHeight);
	}
	return (0);
}
