#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * preorder - function that print binary tree using pre-order traversal
 * @tree: Binary tree
 * @func: Function pointer
 * Return:Without return
 */
void preorder(const binary_tree_t *tree, void (*func)(int))
{
	func(tree->n);
	if (tree->left)
		preorder(tree->left, func);
	if (tree->right)
		preorder(tree->right, func);
}

/**
 * binary_tree_preorder - Validate if the tree is not null
 * @tree: Binary tree
 * @func: Function pointer
 * Return: Without return
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		preorder(tree, func);
	}
}
