#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node is a root
 * @node: Node to valida if is a root
 * Return: 1 if the node is the root, or 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	else if (!node->parent)
		return (1);
	return (0);
}
