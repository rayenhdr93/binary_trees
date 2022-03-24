#include "binary_trees.h"
/**
 * binary_tree_sibling - Pre-order traversal
 * @node: a pointer to the root node of the tree to traverse
 * Return: is_perfect
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if ((!node) || (!node->parent) ||
	(!node->parent->left) || (!node->parent->right))
		return (0);
	return (node->parent->left != node ?
	 node->parent->left : node->parent->right);
}
