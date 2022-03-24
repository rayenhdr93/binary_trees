#include "binary_trees.h"
/**
 * binary_tree_balance - Pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree != NULL)
	{
	height_l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	}
	return (height_l - height_r);
}
