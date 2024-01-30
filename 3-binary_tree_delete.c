#include "binary_trees.h"
/**
 * binary_tree_delete - a function that deletes a binary tree
 * @tree: the binary tree to be deleted
 * Return: void returns nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}
	free(tree);
}
