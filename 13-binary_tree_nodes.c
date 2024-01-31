#include "binary_trees.h"
/**
 * binary_tree_nodes - returns the number of nodes with 1 child at least
 * @tree: the tree to be counting nodes from
 * Return: returns the number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		count++;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}
