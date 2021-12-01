#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * height - measures the balance factor of a binary tree
 * @tree: Binary tree
 * Return: measures the balance factor of a binary tree
 */
size_t height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + height(tree->left) : 0;
	height_r = tree->right ? 1 + height(tree->right) : 0;
	return (height_l - height_r);
}

/**
 * binary_tree_balance - Validate that the tree is not null
 * @tree: Binary tree
 * Return: measures the balance factor of a binary tree
 */
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
