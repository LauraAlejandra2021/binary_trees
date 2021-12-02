#include "binary_trees.h"

/**
 * binary_tree_node - This function creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	/* root node */
	if (parent == NULL)
	{
		new = malloc(sizeof(binary_tree_t));
		if (new == NULL)
			return (NULL);
		new->n = value;
		new->left = NULL;
		new->right = NULL;
		parent = new;
	}

	/* root node exists, creating & adding new node to parent node */
	else
	{
		new = malloc(sizeof(binary_tree_t));
		if (new == NULL)
			return (NULL);
		new->n = value;
		new->left = NULL;
		new->right = NULL;
		new->parent = parent;
	}

	return (new);
}
