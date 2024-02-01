#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a tree
 * @tree: the right to be measured the height of
 * Return: returns the height of the binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0, else return balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree != NULL)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
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
/**
 * binary_tree_is_perfect - function that checks if a tree is perfect or not
 * @tree: the tree to figure out
 * Return: returns 1 if perfect, else 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((binary_tree_is_full(tree) == 1) &&
		(binary_tree_balance(tree) == 0))
		return (1);
	return (0);
}
