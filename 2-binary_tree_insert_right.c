#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert right
 * @parent: parent
 * @value: value
 * Return: created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *New = NULL;

	if (!parent)
		return (NULL);
	New = binary_tree_node(parent, value);
	if (parent->right)
	{
		New->right = parent->right;
		(parent->right)->parent = New;
	}
	parent->right = New;
	return (New);
}
