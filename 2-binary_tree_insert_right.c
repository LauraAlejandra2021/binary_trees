#include "binary_trees.h"

/**
 * binary_tree_insert_right - This function inserts a node as the
 * right-child of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child;

	if (parent == NULL)
		return (NULL);

	/* Creating a new node */
	new_child = binary_tree_node(parent, value);
	/* inserting new node as the right child of parent if it doesn't exist */
	if (parent->right == NULL)
		parent->right = new_child;

	/* If parent already has a right-child, the new node must take its place,...*/
	/* and the old right-child must be set as the right-child of the new node.*/
	else
	{
		new_child->right = parent->right;
		parent->right = new_child;
		new_child->right->parent = new_child;
	}
	return (new_child);
}
