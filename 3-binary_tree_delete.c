#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * delete - delete any nodes in the binary tree with recursion
 * @tree: Binary tree
 * Return: Without return
 */
void delete(binary_tree_t *tree)
{
	if (tree->right)
		delete(tree->right);
	if (tree->left)
		delete(tree->left);
	free(tree);
}

/**
 * binary_tree_delete - Principal function
 * @tree: Binary tree
 * Return: Without return
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		delete(tree);
	}
}
