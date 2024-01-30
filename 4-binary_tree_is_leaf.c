#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a binary tree is a leaf or not
 * @node: the node to be checked if it's anode or not
 * Return: returns 1 in case of leaf , 0 in case if not leaf
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	while (node)
	{
		if (node->left || node->right)
		{
			return (0);
		}
		if (node->left == NULL && node->right == NULL)
		{
			return (1);
		}
	}
	return (1);
}
