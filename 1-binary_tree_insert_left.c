#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: Principal Node
 * @value: Value to new node in the left of the parent Node
 * Return: Address of the new child node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child = NULL;

	child = binary_tree_node(parent, value);
	if (!parent->left)
		parent->left = child;
	else
	{
		child->left = parent->left;
		parent->left->parent = child;
		parent->left = child;
	}
	return (child);
}
