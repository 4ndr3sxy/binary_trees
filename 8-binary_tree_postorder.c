#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - function that print binary tree using
 * post-order traversal
 * @tree: Binary tree
 * @func: Function pointer
 * Return:Without return
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}

/**
 * binary_tree_binary_tree_postorder - Validate if the tree is not null
 * @tree: Binary tree
 * @func: Function pointer
 * Return: Without return
 */
void binary_tree_binary_tree_postorder(const binary_tree_t *tree,
									   void (*func)(int))
{
	if (tree)
		binary_tree_postorder(tree, func);
}
