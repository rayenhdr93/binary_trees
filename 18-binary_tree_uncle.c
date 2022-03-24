#include "binary_trees.h"
/**
 * binary_tree_uncle - Pre-order traversal
 * @node: a pointer to the root node of the tree to traverse
 * Return: is_perfect
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if ((!node) || (!node->parent->parent) ||
	(!node->parent->parent->left) || (!node->parent->parent->right))
		return (0);
	return (node->parent->parent->left != node->parent ?
	 node->parent->parent->left : node->parent->parent->right);
}
