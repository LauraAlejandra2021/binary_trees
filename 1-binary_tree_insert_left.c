#include "binary_trees.h"

/**
 * binary_tree_insert_left - This function inserts a node as the
 * left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to put in the new node
 * Return: a pointer to the created node, or NULL on failure or
 * if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child;

	if (parent == NULL)
		return (NULL);

	/* Creating a new node */
	new_child = binary_tree_node(parent, value);
	/* inserting new node as the left child of parent, if it doesn't exist */
	if (parent->left == NULL)
		parent->left = new_child;

	/* If parent already has a left-child, the new node must take its place, */
	/* ... and the old left-child must be set as the left-child of the new node */
	else
	{
		new_child->left = parent->left;
		parent->left = new_child;
		new_child->left->parent = new_child;
	}
	return (new_child);
}
