#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert left
 * @parent: parent
 * @value: value
 * Return: created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *New = NULL;

	if (!parent)
		return (NULL);
	New = binary_tree_node(parent, value);
	if (parent->left)
	{
		New->left = parent->left;
		(parent->left)->parent = New;
	}
	parent->left = New;
	return (New);
}
