#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: first node
 * @second: Second node
 * Return: address parent between first and second nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *node1 = NULL;
	binary_tree_t *node2 = NULL;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (!first->parent && !second->parent)
		return (NULL);
	if (first->parent == second || !first->parent)
		return (first->parent);
	if (second->parent == first || !second->parent)
		return (second->parent);
	if (first->parent == second->parent)
		return (first->parent);
	node1 = binary_trees_ancestor(first->parent, second);
	node2 = binary_trees_ancestor(first, second->parent);
	if (node1)
		return (node1);
	else
		return (node2);
}
