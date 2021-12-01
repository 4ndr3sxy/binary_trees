#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * inorder - function that print binary tree using in-order traversal
 * @tree: Binary tree
 * @func: Function pointer
 * Return:Without return
 */
void inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left)
		inorder(tree->left, func);
	func(tree->n);
	if (tree->right)
		inorder(tree->right, func);
}

/**
 * binary_tree_inorder - Validate if the tree is not null
 * @tree: Binary tree
 * @func: Function pointer
 * Return: Without return
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
		inorder(tree, func);
}
