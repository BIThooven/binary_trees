#include "binary_trees.h"
/**
 * binary_tree_is_root - a function that checks if a node is root or not
 * @node: the node to be checked
 * Return: returns 1 in case of root, 0 if not
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	while (node != NULL)
	{
		if (node->parent == NULL)
			return (1);
		return (0);
	}
	return (0);
}
