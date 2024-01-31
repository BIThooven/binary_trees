#include "binary_trees.h"
/**
 * binary_tree_leaves - a function that counts leaves in a tree
 * @tree: the tree to count leaves on
 * Return: returns the number of leaves in a tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
