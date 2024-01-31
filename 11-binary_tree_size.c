#include "binary_trees.h"
/**
 * binary_tree_size - a function that measures the size of a tree
 * @tree: the tree to be measured the size of
 * Return: returns the size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
