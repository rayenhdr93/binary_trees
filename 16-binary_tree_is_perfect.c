#include "binary_trees.h"
/**
 * binary_tree_height - Pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree != NULL)
	{
	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	}
	return (height_l > height_r ? height_l : height_r);
}
/**
 * binary_tree_balance - Pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((!tree->left) && (tree->right))
		return (-1 - binary_tree_height(tree->right));
	if ((tree->left) && (!tree->right))
		return (1 + binary_tree_height(tree->right));
	else
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * binary_tree_is_full - Pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * Return: is_full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	return (binary_tree_is_full(tree->left) - binary_tree_is_full(tree->right)
	 == 0 ? 1 : 0);
}
/**
 * binary_tree_is_perfect - Pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * Return: is_perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	return (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0
	? 1 : 0);
}
