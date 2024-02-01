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
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0, else return balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}
