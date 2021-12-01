#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: Node to validate kind
 * Return: Adrress of the node sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	else if (!node->parent)
		return (NULL);
	else if (node->parent->left == node)
	{
		if (!node->parent->right)
			return (NULL);
		return (node->parent->right);
	}
	else
	{
		if (!node->parent->left)
			return (NULL);
		return (node->parent->left);
	}
}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: Node to validate kind
 * Return: Adrress of the node uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node)
		return (binary_tree_sibling(node->parent));
	return (NULL);
}
