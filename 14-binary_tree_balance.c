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
	int height_l, height_r;

	if (tree)
	{
		height_l = height(tree->left);
		height_r = height(tree->right);
		if (height_l > height_r)
			return (height_l + 1);
		else
			return (height_r + 1);
	}
	return (0);
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
		result_l = height(tree->left) - height(tree->right);
		return (result_l);
	}
	return (0);
}
