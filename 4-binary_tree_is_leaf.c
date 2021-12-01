#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: node to validate if is a leaf or not
 * Return: 1 if the node is a leaf, or 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	else if (!node->left && !node->right)
		return (1);
	return (0);
}
