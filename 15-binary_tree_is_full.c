#include "binary_trees.h"
/**
 * binary_tree_is_full - a function that measures if a tree is full or not
 * @tree: the tree to figure out
 * Return: returns 1 if full, else 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	else if (tree->left || tree->right)
		return (0);
	return (1);
}
