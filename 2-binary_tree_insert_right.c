#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: Principal Node
 * @value: Value to new node in the right of the parent Node
 * Return: Address of the new child node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child = NULL;

	child = binary_tree_node(parent, value);
	if (!parent->right)
		parent->right = child;
	else
	{
		child->right = parent->right;
		parent->right->parent = child;
		parent->right = child;
	}
	return (child);
}
