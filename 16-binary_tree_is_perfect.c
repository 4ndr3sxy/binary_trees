#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * _pow - get pow(x, y) with recursion
 * @x: base
 * @y: elevation
 * Return: pow of number x elevator in y
 */
size_t _pow(size_t x, size_t y)
{
	if (y > 1)
	{
		x *= 2;
		y--;
		return (_pow(x, y));
	}
	return (x);
}

/**
 * height - get count of N in  abinary tree depend of validator
 * @tree: Binary tree
 * @validator: flag
 * Return: number of N depend of validator
 */
size_t height(const binary_tree_t *tree, int validator)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + height(tree->left, validator) : 0;
	height_r = tree->right ? 1 + height(tree->right, validator) : 0;
	switch (validator)
	{
	case 0:
		return (height_r - height_l);
	case 1:
		return (height_l > height_r ? height_l : height_r);
	case 2:
		return (height_l + height_r);
	default:
		return (0);
	}
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: Binary tree
 * Return: 1 if a binary tree is perfect or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t resultHeight = 0;
	size_t resultLevels = 0;
	size_t resultCountNodes = 0;
	size_t resultPow = 0;

	if (tree)
	{
		resultHeight = height(tree, 0);
		if (resultHeight == 0)
		{
			resultCountNodes = height(tree, 2);
			resultCountNodes += 2;
			resultLevels = height(tree, 1);
			resultLevels++;
			resultPow = _pow(2, resultLevels);
			if (resultPow == resultCountNodes)
				return (1);
		}
	}
	return (0);
}
