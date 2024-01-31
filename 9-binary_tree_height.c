#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a tree
 * @tree: the right to be measured the height of
 * Return: returns the height of the binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t lft, rgt;

		if (tree)
		{
			lft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			rgt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((lft > rgt) ? lft : rgt);
	}
}
