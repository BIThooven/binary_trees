#include "binary_trees.h"
/**
 * binary_tree_leaves - a function that counts leaves in a tree
 * @tree: the tree to count leaves on
 * Return: returns the number of leaves in a tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count;

	if (tree == NULL)
		return (0);

	count = 0;
	if (tree != NULL)
	{
		binary_tree_leaves(tree->left);
		if ((tree->left == NULL) && (tree->right == NULL))
		{
			count++;
		}
		binary_tree_leaves(tree->right);
	}
	return (count);
}
